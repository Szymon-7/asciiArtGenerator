CC = clang
CFLAGS = -std=c23 -Wall -Wextra -Werror -pedantic -Iinclude

UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Darwin)
    LIB_EXT = dylib
    RPATH_FLAG = -Wl,-rpath,@loader_path/../lib
else
    LIB_EXT = so
    RPATH_FLAG = -Wl,-rpath,'$$ORIGIN/../lib'
endif

bin/ascii_to_art: obj/main.o lib/libtext_ascii.$(LIB_EXT)
	$(CC) $(CFLAGS) obj/main.o -o bin/ascii_to_art -Llib -ltext_ascii $(RPATH_FLAG)

obj/main.o: src/main.c | dirs
	$(CC) $(CFLAGS) -c src/main.c -o obj/main.o

lib/libtext_ascii.$(LIB_EXT): obj/text_ascii.o obj/style_default.o obj/style_ansi.o obj/style_block.o
	$(CC) $(CFLAGS) -shared obj/text_ascii.o obj/style_default.o obj/style_ansi.o obj/style_block.o -o lib/libtext_ascii.$(LIB_EXT)

obj/text_ascii.o: src/text_ascii.c
	$(CC) $(CFLAGS) -c -fPIC src/text_ascii.c -o obj/text_ascii.o

obj/style_default.o: src/style_default.c
	$(CC) $(CFLAGS) -c -fPIC src/style_default.c -o obj/style_default.o

obj/style_ansi.o: src/style_ansi.c
	$(CC) $(CFLAGS) -c -fPIC src/style_ansi.c -o obj/style_ansi.o

obj/style_block.o: src/style_block.c
	$(CC) $(CFLAGS) -c -fPIC src/style_block.c -o obj/style_block.o

.PHONY: dirs clean cleaner

dirs:
	mkdir -p bin lib obj

clean:
	rm -f obj/*.o

cleaner:
	rm -f obj/*.o lib/*.$(LIB_EXT) bin/*

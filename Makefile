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

lib/libtext_ascii.$(LIB_EXT): obj/text_ascii.o
	$(CC) $(CFLAGS) -shared obj/text_ascii.o -o lib/libtext_ascii.$(LIB_EXT)

obj/text_ascii.o: src/text_ascii.c
	$(CC) $(CFLAGS) -c -fPIC src/text_ascii.c -o obj/text_ascii.o

.PHONY: dirs clean cleaner

dirs:
	mkdir -p bin lib obj

clean:
	rm -f obj/*.o

cleaner:
	rm -f obj/*.o lib/*.$(LIB_EXT) bin/*

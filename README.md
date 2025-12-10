```
       █████╗  ███████╗  ██████╗ ██╗ ██╗           █████╗  ██████╗  ████████╗
      ██╔══██╗ ██╔════╝ ██╔════╝ ██║ ██║          ██╔══██╗ ██╔══██╗ ╚══██╔══╝
      ███████║ ███████╗ ██║      ██║ ██║          ███████║ ██████╔╝    ██║
      ██╔══██║ ╚════██║ ██║      ██║ ██║          ██╔══██║ ██╔══██╗    ██║
      ██║  ██║ ███████║ ╚██████╗ ██║ ██║          ██║  ██║ ██║  ██║    ██║
      ╚═╝  ╚═╝ ╚══════╝  ╚═════╝ ╚═╝ ╚═╝          ╚═╝  ╚═╝ ╚═╝  ╚═╝    ╚═╝

 ██████╗  ███████╗ ███╗   ██╗ ███████╗ ██████╗   █████╗  ████████╗  ██████╗  ██████╗
██╔════╝  ██╔════╝ ████╗  ██║ ██╔════╝ ██╔══██╗ ██╔══██╗ ╚══██╔══╝ ██╔═══██╗ ██╔══██╗
██║  ███╗ █████╗   ██╔██╗ ██║ █████╗   ██████╔╝ ███████║    ██║    ██║   ██║ ██████╔╝
██║   ██║ ██╔══╝   ██║╚██╗██║ ██╔══╝   ██╔══██╗ ██╔══██║    ██║    ██║   ██║ ██╔══██╗
╚██████╔╝ ███████╗ ██║ ╚████║ ███████╗ ██║  ██║ ██║  ██║    ██║    ╚██████╔╝ ██║  ██║
 ╚═════╝  ╚══════╝ ╚═╝  ╚═══╝ ╚══════╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝    ╚═╝     ╚═════╝  ╚═╝  ╚═╝
 ```

## Build Instructions

Run "make"

Optional:  
Run `make clean` to delete all .o files  
Run `make cleaner` to delete all .o, .so/.dylib, and executable files

## Usage

Text to ascii art:  
`./bin/ascii_to_art <INPUT> [--font <FONT>] [--scale <N>]`

Image to ascii art: (will generate an `output.txt`)  
`./bin/image_to_art <FILE> [--scale <N>]`  
`cat output.txt` to view result (may have to zoom out CTRL + minus)

## Currently Available Fonts

<img src="images/examples/Default.png" width="350"/>

<img src="images/examples/ANSI.png" width="350"/>

<img src="images/examples/BLOCK.png" width="350"/>

## Image to Art Example

<img src="images/examples/DogInput.png" width="500"/>
<img src="images/examples/DogOutput.png" width="500"/>

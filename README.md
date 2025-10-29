# My C Lab

This is my lab for building software with the C programming language, just like I did in vocational high school, but now in advanced mode for the modern programming world. I've decided to learn C again because, in this era of AI, I believe web developers might be replaced by AI in the next 3 to 5 years. With C, I aim to connect more deeply with hardware.

## Setup for Windows

1. Install [WinLibs MinGW-w64](https://winlibs.com/)
2. Set environment variable:
   ```bash
   setx MINGW_HOME "C:\mingw64"
   ```

## Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/itsgitz/c-lab.git
   ```
2. Change directory to the `getting-started` folder:
   ```bash
   cd getting-started
   ```
3. Compile and run the program:
   ```bash
   gcc hello.c -o hello.exe
   hello.exe
   ```

## License

[MIT](./LICENSE)

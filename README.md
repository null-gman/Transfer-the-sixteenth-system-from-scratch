## Hex to Decimal CLI Converter

A simple command-line tool that converts hexadecimal numbers to decimal in console mode.

### Compilation

The program is written in standard C and works on both **Linux** and **Windows** platforms.

It primarily uses the standard C library for core functionality, but in some cases, it relies on platform-specific APIs.

The default compiler is `gcc`.

#### Requirements

- Make sure `make` is installed on your system.

#### Build Instructions

1. Run `make dir`
   This creates the `objs/` and `bin/` directories.

2. To compile the program:
   - For **Linux**: `make linux`
   - For **Windows**: `make win`

3. To clean up object files and binaries:
   `make clean`

### Usage

The program runs in console mode with a clean and intuitive interface.
Simply run the compiled binary and straightforward to use.

> Note: Input values are limited .

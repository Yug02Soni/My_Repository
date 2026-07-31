# C Calculator

A simple command-line calculator written in **C** and built with **CMake**. The application performs basic arithmetic operations through a text-based interface.

## Features

* Addition
* Subtraction
* Multiplication
* Division
* Simple command-line interface
* Cross-platform build using CMake

## Requirements

* C compiler (GCC, Clang, or MSVC)
* CMake 3.10 or later

## Building

```bash
git clone https://github.com/<your-username>/My_Repository.git
cd My_Repository/C_Calculator

mkdir build
cd build

cmake ..
cmake --build .
```

## Running

After building, run the generated executable.

**Windows**

```bash
.\Calculator.exe
```

**Linux/macOS**

```bash
./Calculator
```

## Project Structure

```text
C_Calculator/
├── CMakeLists.txt
├── src/
│   └── main.c
├── include/
└── README.md
```

## Technologies Used

* C
* CMake

## Future Improvements

* Scientific calculator functions
* Expression parsing
* Input validation
* Calculation history
* Unit tests

## License

This project is available under the MIT License.

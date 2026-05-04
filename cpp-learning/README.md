# C++ Learning: Low-Level and Security Fundamentals

This repository is organized as a progressive path:

1. Basics
2. Memory fundamentals
3. Core data structures
4. Low-level systems concepts
5. Security basics and safe coding
6. Small applied projects

Each `.cpp` file demonstrates one clear concept with minimal dependencies.

## Build Prerequisites

- C++ compiler (`g++` or `clang++`) with C++17 support
- `make` (optional, for batch builds)
- `gdb` (optional, for debugging labs)

## Compile and Run One File

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic -g 02_memory/pointers.cpp -o build/pointers
./build/pointers
```

## Build All Lessons with Make

```bash
make all
```

Artifacts are written to the `build/` folder with mirrored subpaths.

## Run a Specific Program

```bash
make run TARGET=02_memory/pointers.cpp
```

## Optional GDB Examples

```bash
gdb ./build/02_memory/pointers
(gdb) break main
(gdb) run
(gdb) print ptr
(gdb) x/4xb ptr
```

## Security Learning Notes

- `05_security_basics/buffer_overflow_demo.cpp` includes unsafe and safer copy patterns.
- `05_security_basics/unsafe_functions.cpp` compares unchecked writes vs bounded writes.
- `05_security_basics/input_validation.cpp` demonstrates basic input validation and range checks.

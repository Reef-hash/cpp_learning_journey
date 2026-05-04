# C++ Learning Journey

A structured, ground-up C++ learning path focused on **low-level systems programming**, **memory internals**, and **security fundamentals** — built with reverse engineering and exploit analysis in mind.

---

## Goal

Understand how C++ works at the machine level: how memory is allocated and managed, how vulnerabilities arise, and how to write safer systems code.

---

## Repository Structure

```
cpp-foundation/        # Introductory notes and first programs
cpp-learning/
  00_setup/            # Compiler setup and verification
  01_basics/           # Variables, control flow, functions, arrays
  02_memory/           # Pointers, references, stack vs heap, dynamic memory, memory layout
  03_data_structures/  # Structs, linked lists, stacks and queues
  04_low_level/        # Bitwise ops, endianness, memory alignment, buffers
  05_security_basics/  # Buffer overflows, unsafe functions, input validation
  06_projects/         # Mini VM, memory viewer, simple debugger
```

Each `.cpp` file demonstrates one concept with minimal external dependencies.

---

## Topics Covered

| Module | Concepts |
|---|---|
| **01 Basics** | Data types, variables, I/O, control flow, functions, arrays |
| **02 Memory** | Stack vs heap, pointers, references, dynamic allocation, memory layout |
| **03 Data Structures** | Structs, linked lists, stack and queue implementations |
| **04 Low Level** | Bitwise operations, endianness, memory alignment, raw buffers |
| **05 Security** | Buffer overflow patterns, unsafe vs safe string functions, input validation |
| **06 Projects** | Mini bytecode VM, memory viewer, simple debugger |

---

## Build & Run

**Prerequisites:** `g++` or `clang++` with C++17, `make` (optional), `gdb` (optional)

**Compile a single file:**
```bash
g++ -std=c++17 -Wall -Wextra -g cpp-learning/02_memory/pointers.cpp -o build/pointers
./build/pointers
```

**Build all lessons:**
```bash
cd cpp-learning
make all
```

**Run a specific lesson:**
```bash
make run TARGET=04_low_level/bitwise_operations.cpp
```

---

## Debugging with GDB

```bash
gdb ./build/02_memory/pointers
(gdb) break main
(gdb) run
(gdb) print ptr
(gdb) x/4xb ptr
```

---

## Security Notes

- `05_security_basics/buffer_overflow_demo.cpp` — unsafe vs bounded copy patterns
- `05_security_basics/unsafe_functions.cpp` — unchecked writes vs size-limited writes
- `05_security_basics/input_validation.cpp` — range checks and input sanitization

> Every variable occupies memory. Understanding that is the foundation for reverse engineering and vulnerability research.


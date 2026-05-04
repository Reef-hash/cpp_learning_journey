CXX ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -Wpedantic -g -Iinclude

SOURCES := \
	00_setup/compiler_test.cpp \
	01_basics/variables.cpp \
	01_basics/control_flow.cpp \
	01_basics/functions.cpp \
	01_basics/arrays.cpp \
	02_memory/pointers.cpp \
	02_memory/references.cpp \
	02_memory/stack_vs_heap.cpp \
	02_memory/dynamic_memory.cpp \
	02_memory/memory_layout.cpp \
	03_data_structures/structs.cpp \
	03_data_structures/linked_list.cpp \
	03_data_structures/stack_queue.cpp \
	04_low_level/bitwise_operations.cpp \
	04_low_level/endianness.cpp \
	04_low_level/memory_alignment.cpp \
	04_low_level/buffer_basics.cpp \
	05_security_basics/buffer_overflow_demo.cpp \
	05_security_basics/unsafe_functions.cpp \
	05_security_basics/input_validation.cpp \
	06_projects/simple_debugger.cpp \
	06_projects/memory_viewer.cpp \
	06_projects/mini_vm.cpp

TARGETS := $(SOURCES:%.cpp=build/%)

.PHONY: all clean run

all: $(TARGETS)

build/%: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -o $@

run:
	@if [ -z "$(TARGET)" ]; then \
		echo "Usage: make run TARGET=02_memory/pointers.cpp"; \
		exit 1; \
	fi
	@mkdir -p build/$(dir $(TARGET))
	$(CXX) $(CXXFLAGS) $(TARGET) -o build/$(basename $(TARGET))
	./build/$(basename $(TARGET))

clean:
	rm -rf build/*
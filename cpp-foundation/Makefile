# Compiler command
CXX := g++
# Common flags: C++17, warnings, and debug symbols
CXXFLAGS := -std=c++17 -Wall -Wextra -g

# Source file to compile
SRC := main.cpp
# Folder where build output should go
OUT_DIR := build
# Final executable path (this is the key line that avoids main.exe in root)
TARGET := $(OUT_DIR)/main.exe

# These are helper targets, not actual files
.PHONY: all run clean

# Default target: build the executable
all: $(TARGET)

# Build rule: compile main.cpp and write output to build/main.exe
$(TARGET): $(SRC)
	# Ensure the build folder exists before compiling
	@mkdir -p $(OUT_DIR)
	# -o sets the output file location/name
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Build first, then run the produced executable
run: all
	./$(TARGET)

# Remove generated executable
clean:
	rm -f $(TARGET)

#include "../include/utils.h"

#include <iomanip>
#include <iostream>

void print_separator() {
    std::cout << "----------------------------------------\n";
}

void hex_dump(const unsigned char* data, std::size_t size) {
    for (std::size_t i = 0; i < size; ++i) {
        if (i % 16 == 0) {
            std::cout << "\n0x" << std::hex << i << ": ";
        }
        std::cout << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(data[i]) << ' ';
    }
    std::cout << std::dec << "\n";
}
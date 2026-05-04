#include <iomanip>
#include <iostream>

int main() {
    unsigned char data[16] = {
        0x41, 0x42, 0x43, 0x44,
        0x10, 0x20, 0x30, 0x40,
        0xAA, 0xBB, 0xCC, 0xDD,
        0x01, 0x02, 0x03, 0x04
    };

    std::cout << "Address: " << static_cast<void*>(data) << "\n";
    for (int i = 0; i < 16; ++i) {
        if (i % 8 == 0) {
            std::cout << "\n0x" << std::hex << i << ": ";
        }
        std::cout << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(data[i]) << ' ';
    }
    std::cout << std::dec << "\n";
    return 0;
}
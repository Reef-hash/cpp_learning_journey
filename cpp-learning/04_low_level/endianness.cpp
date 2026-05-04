#include <cstdint>
#include <iostream>

int main() {
    std::uint32_t value = 0x12345678;
    unsigned char* bytes = reinterpret_cast<unsigned char*>(&value);

    std::cout << "bytes: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << std::hex << static_cast<int>(bytes[i]) << ' ';
    }
    std::cout << std::dec << "\n";

    if (bytes[0] == 0x78) {
        std::cout << "Detected little-endian architecture.\n";
    } else {
        std::cout << "Detected big-endian architecture.\n";
    }
    return 0;
}
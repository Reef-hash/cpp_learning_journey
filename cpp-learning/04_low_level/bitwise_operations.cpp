#include <iostream>

int main() {
    unsigned int flags = 0b0000;

    flags |= 0b0001; // Set bit 0.
    flags |= 0b0100; // Set bit 2.
    std::cout << "flags after set: " << flags << "\n";

    flags &= ~0b0001; // Clear bit 0.
    std::cout << "flags after clear: " << flags << "\n";

    bool has_bit2 = (flags & 0b0100) != 0;
    std::cout << "bit 2 set? " << has_bit2 << "\n";
    return 0;
}
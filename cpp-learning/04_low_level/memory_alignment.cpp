#include <iostream>

struct PackedLike {
    char a;
    int b;
    char c;
};

struct BetterAligned {
    int b;
    char a;
    char c;
};

int main() {
    // Field order changes padding, which changes total object size.
    std::cout << "sizeof(PackedLike)   = " << sizeof(PackedLike) << "\n";
    std::cout << "sizeof(BetterAligned)= " << sizeof(BetterAligned) << "\n";
    return 0;
}
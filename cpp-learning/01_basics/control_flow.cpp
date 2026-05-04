#include <iostream>

int main() {
    int value = 7;

    if (value % 2 == 0) {
        std::cout << value << " is even\n";
    } else {
        std::cout << value << " is odd\n";
    }

    std::cout << "Counting: ";
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << ' ';
    }
    std::cout << "\n";
    return 0;
}
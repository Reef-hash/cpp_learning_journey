#include <iostream>

int main() {
    int number = 42;
    int* ptr = &number;

    std::cout << "number value: " << number << "\n";
    std::cout << "number address: " << &number << "\n";
    std::cout << "ptr stores: " << ptr << "\n";
    std::cout << "*ptr reads: " << *ptr << "\n";

    *ptr = 99;
    std::cout << "number after *ptr write: " << number << "\n";
    return 0;
}
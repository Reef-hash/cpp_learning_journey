#include <iostream>

int add(int a, int b) {
    return a + b;
}

int square(int x) {
    return x * x;
}

int main() {
    std::cout << "add(2, 5) = " << add(2, 5) << "\n";
    std::cout << "square(6) = " << square(6) << "\n";
    return 0;
}
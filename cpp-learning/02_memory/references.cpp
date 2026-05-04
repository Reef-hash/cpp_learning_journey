#include <iostream>

void increment(int& value) {
    value += 1;
}

int main() {
    int score = 10;
    int& ref = score;

    std::cout << "score address: " << &score << "\n";
    std::cout << "ref address:   " << &ref << "\n";

    increment(ref);
    std::cout << "score after increment: " << score << "\n";
    return 0;
}
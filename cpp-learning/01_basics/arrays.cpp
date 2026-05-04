#include <iostream>

int main() {
    int values[5] = {10, 20, 30, 40, 50};
    int total = 0;

    for (int i = 0; i < 5; ++i) {
        total += values[i];
    }

    std::cout << "sum = " << total << "\n";
    std::cout << "first element address = " << static_cast<void*>(&values[0]) << "\n";
    std::cout << "second element address = " << static_cast<void*>(&values[1]) << "\n";
    return 0;
}
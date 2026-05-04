#include <iostream>

int main() {
    const int length = 4;
    int* data = new int[length];

    for (int i = 0; i < length; ++i) {
        data[i] = (i + 1) * 10;
    }

    for (int i = 0; i < length; ++i) {
        std::cout << "data[" << i << "]=" << data[i] << " at " << &data[i] << "\n";
    }

    delete[] data;
    data = nullptr;
    return 0;
}
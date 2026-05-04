#include <cerrno>
#include <climits>
#include <cstdlib>
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: ./input_validation <number 0-100>\n";
        return 1;
    }

    char* end = nullptr;
    errno = 0;
    long value = std::strtol(argv[1], &end, 10);

    if (errno != 0 || end == argv[1] || *end != '\0') {
        std::cout << "Invalid numeric input\n";
        return 1;
    }

    if (value < 0 || value > 100 || value > INT_MAX) {
        std::cout << "Input out of accepted range\n";
        return 1;
    }

    std::cout << "Validated value: " << static_cast<int>(value) << "\n";
    return 0;
}
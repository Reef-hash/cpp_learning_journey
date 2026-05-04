#include <cstring>
#include <iostream>

int main() {
    char buffer[8] = {0};
    const char* msg = "abc";

    // Copy only up to destination capacity minus null terminator.
    std::strncpy(buffer, msg, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';

    std::cout << "buffer content: " << buffer << "\n";
    std::cout << "buffer bytes: " << sizeof(buffer) << "\n";
    return 0;
}
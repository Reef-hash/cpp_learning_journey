#include <cstdio>
#include <cstring>
#include <iostream>

int main() {
    const char* user = "guest";

    char unsafe[16] = {0};
    std::strcpy(unsafe, user); // Unsafe when source length is uncontrolled.

    char safe[16] = {0};
    std::snprintf(safe, sizeof(safe), "%s", user); // Bounded write.

    std::cout << "unsafe buffer: " << unsafe << "\n";
    std::cout << "safe buffer:   " << safe << "\n";
    return 0;
}
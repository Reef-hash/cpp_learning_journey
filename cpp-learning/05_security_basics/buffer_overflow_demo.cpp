#include <cstring>
#include <iostream>

int main() {
    char vulnerable[8] = {0};
    const char* controlled_input = "1234567";

    // Unsafe pattern: no destination size check (safe only because source is short here).
    std::strcpy(vulnerable, controlled_input);
    std::cout << "unsafe copy result: " << vulnerable << "\n";

    char safe[8] = {0};
    std::strncpy(safe, controlled_input, sizeof(safe) - 1);
    safe[sizeof(safe) - 1] = '\0';
    std::cout << "safe copy result: " << safe << "\n";

    std::cout << "Never use unchecked copy with untrusted input.\n";
    return 0;
}
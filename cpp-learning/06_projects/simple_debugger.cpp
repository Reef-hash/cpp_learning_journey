#include <iostream>

int main() {
    int pc = 0;
    bool running = true;
    char command = 's';

    std::cout << "Simple debugger demo commands: s(step), c(continue), q(quit)\n";
    while (running) {
        std::cout << "pc=" << pc << " > ";
        std::cin >> command;

        if (command == 's') {
            pc += 1;
            std::cout << "Stepped to instruction " << pc << "\n";
        } else if (command == 'c') {
            pc += 5;
            std::cout << "Continued to instruction " << pc << "\n";
        } else if (command == 'q') {
            running = false;
        } else {
            std::cout << "Unknown command\n";
        }
    }
    return 0;
}
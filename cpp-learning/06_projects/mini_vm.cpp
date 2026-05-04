#include <array>
#include <iostream>

enum OpCode {
    OP_LOAD_A = 1,
    OP_ADD_A = 2,
    OP_PRINT = 3,
    OP_HALT = 255
};

int main() {
    std::array<int, 8> bytecode = {OP_LOAD_A, 5, OP_ADD_A, 7, OP_PRINT, OP_HALT, 0, 0};
    int ip = 0;
    int reg_a = 0;

    while (true) {
        int op = bytecode[ip++];
        if (op == OP_LOAD_A) {
            reg_a = bytecode[ip++];
        } else if (op == OP_ADD_A) {
            reg_a += bytecode[ip++];
        } else if (op == OP_PRINT) {
            std::cout << "A=" << reg_a << "\n";
        } else if (op == OP_HALT) {
            break;
        } else {
            std::cout << "Invalid opcode\n";
            break;
        }
    }
    return 0;
}
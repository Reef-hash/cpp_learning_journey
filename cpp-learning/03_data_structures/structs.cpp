#include <iostream>

struct ProcessInfo {
    int pid;
    int priority;
    bool running;
};

int main() {
    ProcessInfo process = {1337, 5, true};

    std::cout << "pid=" << process.pid << "\n";
    std::cout << "priority=" << process.priority << "\n";
    std::cout << "running=" << process.running << "\n";
    std::cout << "struct size=" << sizeof(ProcessInfo) << " bytes\n";
    return 0;
}
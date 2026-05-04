#include <iostream>

int main() {
    int stack_value = 21;               // Lives in current stack frame.
    int* heap_value = new int(84);      // Lives in heap until delete.

    std::cout << "stack value: " << stack_value << ", addr=" << &stack_value << "\n";
    std::cout << "heap value:  " << *heap_value << ", addr=" << heap_value << "\n";

    delete heap_value;
    heap_value = nullptr;
    return 0;
}
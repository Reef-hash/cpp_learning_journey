#include <iostream>

int global_data = 10;
static int static_data = 20;

void text_segment_marker() {
}

int main() {
    int stack_data = 30;
    int* heap_data = new int(40);

    // Typical process memory sections: .data/.bss (globals), heap, stack, text.
    std::cout << "global_data (.data)  : " << &global_data << "\n";
    std::cout << "static_data (.data)  : " << &static_data << "\n";
    std::cout << "stack_data (stack)   : " << &stack_data << "\n";
    std::cout << "heap_data  (heap)    : " << heap_data << "\n";
    std::cout << "code addr (text)     : " << reinterpret_cast<void*>(&text_segment_marker) << "\n";

    delete heap_data;
    heap_data = nullptr;
    return 0;
}
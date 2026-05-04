#include <iostream>

struct Stack {
    int data[4];
    int top;
};

void push(Stack& s, int value) {
    if (s.top < 4) {
        s.data[s.top++] = value;
    }
}

int pop(Stack& s) {
    if (s.top == 0) {
        return -1;
    }
    return s.data[--s.top];
}

int main() {
    Stack stack = {{0, 0, 0, 0}, 0};
    push(stack, 7);
    push(stack, 8);
    push(stack, 9);

    std::cout << "pop: " << pop(stack) << "\n";
    std::cout << "pop: " << pop(stack) << "\n";
    std::cout << "pop: " << pop(stack) << "\n";
    return 0;
}
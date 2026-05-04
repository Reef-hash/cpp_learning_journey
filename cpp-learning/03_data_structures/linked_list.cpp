#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    Node* current = head;
    while (current != nullptr) {
        std::cout << "node value=" << current->value << ", addr=" << current << "\n";
        current = current->next;
    }

    current = head;
    while (current != nullptr) {
        Node* to_delete = current;
        current = current->next;
        delete to_delete;
    }
    return 0;
}
#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::add(int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

bool LinkedList::find(int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void LinkedList::remove(int value) {
    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr && current->data != value) {
        previous = current;
        current = current->next;
    }
    if (current != nullptr) {
        if (previous == nullptr) {
            head = current->next;
        } else {
            previous->next = current->next;
        }
        delete current;
    }
}

void LinkedList::removeFirstK(int k) {
    for (int i = 0; i < k && head != nullptr; ++i) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

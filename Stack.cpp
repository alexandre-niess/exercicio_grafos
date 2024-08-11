#include "Stack.h"

void Stack::push(int value) {
    stack.push(value);
}

bool Stack::find(int value) {
    std::stack<int> tempStack = stack;
    while (!tempStack.empty()) {
        if (tempStack.top() == value) {
            return true;
        }
        tempStack.pop();
    }
    return false;
}

void Stack::pop() {
    if (!stack.empty()) {
        stack.pop();
    }
}

void Stack::removeK(int k) {
    for (int i = 0; i < k && !stack.empty(); ++i) {
        stack.pop();
    }
}

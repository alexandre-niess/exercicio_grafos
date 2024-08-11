#ifndef STACK_H
#define STACK_H

#include <stack>

class Stack {
public:
    void push(int value);
    bool find(int value);
    void pop();
    void removeK(int k);

private:
    std::stack<int> stack;
};

#endif // STACK_H

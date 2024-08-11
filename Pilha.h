#ifndef STACK_H
#define STACK_H

#include <stack>

class Pilha 
{
public:
    void push(int valor);
    bool find(int valor);
    void pop();
    void removeK(int k);

private:
    std::stack<int> stack;
};

#endif // STACK_H

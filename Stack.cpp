#include "Pilha.h"

void Stack::empilhar(int valor) {
    pilha.push(valor);
}

bool Stack::encontrar(int valor) {
    std::stack<int> pilhaTemporaria = pilha;
    while (!pilhaTemporaria.empty()) {
        if (pilhaTemporaria.top() == valor) {
            return true;
        }
        pilhaTemporaria.pop();
    }
    return false;
}

void Stack::desempilhar() {
    if (!pilha.empty()) {
        pilha.pop();
    }
}

void Stack::removerK(int k) {
    for (int i = 0; i < k && !pilha.empty(); ++i) {
        pilha.pop();
    }
}

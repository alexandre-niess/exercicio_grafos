#include "ListaEncadeada.h"

LinkedList::LinkedList() : cabeca(nullptr) {}

void LinkedList::adicionar(int valor) {
    No* novoNo = new No{valor, cabeca};
    cabeca = novoNo;
}

bool LinkedList::encontrar(int valor) {
    No* atual = cabeca;
    while (atual != nullptr) {
        if (atual->dado == valor) {
            return true;
        }
        atual = atual->proximo;
    }
    return false;
}

void LinkedList::remover(int valor) {
    No* atual = cabeca;
    No* anterior = nullptr;
    while (atual != nullptr && atual->dado != valor) {
        anterior = atual;
        atual = atual->proximo;
    }
    if (atual != nullptr) {
        if (anterior == nullptr) {
            cabeca = atual->proximo;
        } else {
            anterior->proximo = atual->proximo;
        }
        delete atual;
    }
}

void LinkedList::removerPrimeirosK(int k) {
    for (int i = 0; i < k && cabeca != nullptr; ++i) {
        No* temp = cabeca;
        cabeca = cabeca->proximo;
        delete temp;
    }
}

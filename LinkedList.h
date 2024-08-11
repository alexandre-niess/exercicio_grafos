#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList();
    void add(int value);
    bool find(int value);
    void remove(int value);
    void removeFirstK(int k);

private:
    Node* head;
};

#endif // LINKEDLIST_H

#ifndef QUEUE_H
#define QUEUE_H

#include <queue>

class Queue {
public:
    void enqueue(int value);
    bool find(int value);
    void dequeue();
    void removeK(int k);

private:
    std::queue<int> queue;
};

#endif // QUEUE_H

#include "Queue.h"

void Queue::enqueue(int value) {
    queue.push(value);
}

bool Queue::find(int value) {
    std::queue<int> tempQueue = queue;
    while (!tempQueue.empty()) {
        if (tempQueue.front() == value) {
            return true;
        }
        tempQueue.pop();
    }
    return false;
}

void Queue::dequeue() {
    if (!queue.empty()) {
        queue.pop();
    }
}

void Queue::removeK(int k) {
    for (int i = 0; i < k && !queue.empty(); ++i) {
        queue.pop();
    }
}

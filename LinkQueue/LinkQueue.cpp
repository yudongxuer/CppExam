#include "LinkQueue.h"

LinkQueue::LinkQueue() {
    this->head = nullptr;
    this->tail = nullptr;
    this->length = 0;
}

int LinkQueue::len() {
    return this->length;
}

void LinkQueue::push(int value) {
    Node *appendElement = new Node();
    appendElement->value = value;
    if (this->length == 0) {
        this->head = appendElement;
        this->tail = appendElement;
    }
    appendElement->pre = this->tail;
    this->tail->next = appendElement;
    this->tail = this->tail->next;
    this->length++;
}

int LinkQueue::pop() {
    Node *tmpElement = this->head;
    if (this->length == 1) {
        this->head = nullptr;
        this->tail = nullptr;
        int value = tmpElement->value;
        delete tmpElement;
        return value;
    }
    this->head = this->head->next;
    this->head->pre = nullptr;
    int value = tmpElement->value;
    delete tmpElement;
    this->length--;
    return value;
}

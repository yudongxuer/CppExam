#include "LinkStack.h"

void LinkStack::push(int value) {
    Node *node = new Node();
    node->value = value;
    if (this->stackLink == nullptr) {
        this->stackLink = node;
        return;
    }
    this->stackLink->next = node;
    node->pre = this->stackLink;
    this->stackLink = this->stackLink->next;
    this->stackLink->next = nullptr;
}

int LinkStack::pop() {
    int tmpValue = this->stackLink->value;
    Node *tmpPointer = this->stackLink;
    this->stackLink = this->stackLink->pre;
    if (this->stackLink != nullptr) {
        this->stackLink->next = nullptr;
    }
    delete tmpPointer;
    return tmpValue;
}

bool LinkStack::isEmpty() {
    return this->stackLink == nullptr;
}

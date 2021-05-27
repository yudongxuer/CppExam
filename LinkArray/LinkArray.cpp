#include "LinkArray.h"

LinkArray::LinkArray() {
    this->linkArray = this->tail;
    this->size = 0;
}

int LinkArray::Size() {
    return this->size;
}

bool LinkArray::Append(int value) {
    Node *appendNode = new Node{};
    appendNode->value = value;
    if (this->size == 0) {
        this->linkArray = appendNode;
        this->tail = appendNode;
        this->size++;
        return true;
    }
    appendNode->pre = this->tail;
    appendNode->next = nullptr;
    this->tail->next = appendNode;
    this->tail = this->tail->next;
    this->size++;
    return true;
}

int LinkArray::Index(int index) {
    if (index > this->size) {
        return 0;
    }
    Node *tmpPointer = this->linkArray;
    for (int i = 0; i < this->size; i++) {
        if (i == index) {
            return tmpPointer->value;
        } else {
            tmpPointer = tmpPointer->next;
        }
    }
    return 0;
}

bool LinkArray::Set(int index, int value) {
    if (index > this->size) {
        return false;
    }
    Node *tmpPointer = this->linkArray;
    for (int i = 0; i < this->size; i++) {
        if (i == index) {
            tmpPointer->value = value;
            return true;
        } else {
            tmpPointer = tmpPointer->next;
        }
    }
    return false;
}

Node *LinkArray::GetFirstPointer() {
    return this->linkArray;
}

bool LinkArray::Delete(int index) {
    if (index >= this->size) {
        return false;
    }
    Node *tmpPointer = this->linkArray;
    if (index == 0) {
        this->linkArray = this->linkArray->next;
        this->linkArray->pre = nullptr;
        delete tmpPointer;
        return true;
    }
    if (index == this->size - 1) {
        tmpPointer = this->tail;
        this->tail = this->tail->pre;
        this->tail->next = nullptr;
        delete tmpPointer;
        return true;
    }
    for (int i = 0; i < this->size; i++) {
        if (i == index) {
            tmpPointer->pre->next = tmpPointer->next;
            tmpPointer->next->pre = tmpPointer->pre;
            delete tmpPointer;
            this->size--;
            return true;
        } else {
            tmpPointer = tmpPointer->next;
        }
    }
    return false;
}

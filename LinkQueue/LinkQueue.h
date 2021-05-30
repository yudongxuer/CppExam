#ifndef CPPEXAM_LINKQUEUE_H
#define CPPEXAM_LINKQUEUE_H
#include "Node.h"

struct Node {
public:
    Node *pre;
    Node *next;
    int value;
};


class LinkQueue {
private:
    Node *head;
    Node *tail;
    int length;
public:
    void push(int value);
    int pop();
    int len();
    LinkQueue();
};


#endif //CPPEXAM_LINKQUEUE_H

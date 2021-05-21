#ifndef CPPEXAM_LINKSTACK_H
#define CPPEXAM_LINKSTACK_H


struct Node {
public:
    Node *pre;
    Node *next;
    int value;
};


class LinkStack {
private:
    Node *stackLink;
public:
    void push(int value);
    bool isEmpty();
    int pop();
};


#endif //CPPEXAM_LINKSTACK_H

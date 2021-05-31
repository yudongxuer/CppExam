#ifndef CPPEXAM_LINKARRAY_H
#define CPPEXAM_LINKARRAY_H
#include "Node.h"


class LinkArray {
private:
    int size;
    Node *linkArray;
    Node *tail;
public:
    int Size();
    bool Append(int value);
    int Index(int index);
    bool Set(int index, int value);
    bool Delete(int index);
    void Sort(bool reverse);
    Node *GetFirstPointer();
    LinkArray();
};


#endif //CPPEXAM_LINKARRAY_H

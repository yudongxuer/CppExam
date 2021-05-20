#include <iostream>

using namespace std;

class Stack {
private:
    int *values;
    int size = 0;
    int cap = 10;
public:
    bool push(int value);
    bool isEmpty();
    int *pop();
    Stack(int cap);
    ~Stack();
};

Stack::Stack(int cap) {
    this->cap = cap;
    this->values = new int[this->cap];
}

Stack::~Stack() {
    delete this->values;
}

bool Stack::isEmpty() {
    return this->size == 0;
}

bool Stack::push(int value) {
    if (this->size >= this->cap) {
        return false;
    }
    this->values[this->size] = value;
    this->size++;
    return true;
}

int * Stack::pop() {
    if(this->isEmpty()) {
        return nullptr;
    }
    int tmpValue = this->values[this->size-1];
    this->size--;
    return &tmpValue;
}

int main() {
    Stack stack{69};
    int a[16] = {5, 7, 3, 1, 4, 9, 6, 0, 2, 8, 11, 19, 69, 99, 66, 71};
    for (int i : a) {
        stack.push(i);
    }
    for (;!stack.isEmpty();) {
        std::cout << *stack.pop() << std::endl;
    }
    return 0;
}

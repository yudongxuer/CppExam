#include <iostream>
#include "LinkArray.h"

using namespace std;

int main() {
    LinkArray array{};
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    for (int i:a) {
        array.Append(i);
    }
    for (int i = 0; i < array.Size(); i++) {
        std::cout << array.Index(i) << std::endl;
    }
    array.Set(19, 100);
    Node *headPointer = array.GetFirstPointer();
    while (headPointer != nullptr) {
        std::cout << headPointer->value << std::endl;
        headPointer = headPointer->next;
    }
    return 0;
}

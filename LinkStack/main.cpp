#include <iostream>
#include "LinkStack.h"

using namespace std;

int main() {
    LinkStack stack{};
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    for (int i:a) {
        stack.push(i);
    }
    while (!stack.isEmpty()) {
        std::cout << stack.pop() << std::endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

void bubbleSort(int *a, int size) {
    if (a == nullptr) {
        return;
    }
    for (int i=0; i<size; i++) {
        for (int j=i; j<size; j++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    int a[10] = {5, 7, 3, 1, 4, 9, 6, 0, 2, 8};
    bubbleSort(a, 10);
    for (int i : a) {
        std::cout << i << std::endl;
    }
    return 0;
}

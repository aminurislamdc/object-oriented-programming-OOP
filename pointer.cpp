#include <iostream>

using namespace std;

void printArray(int* ptr) {
    cout << endl << "Array Elements (using array base index ptr): " << endl;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr+i) << endl;
    }
}

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int array1[5] = {1, 2, 3, 4, 5};
    cout << "Array Elements address (using array index): " << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }

    printArray(array);
    printArray(array1);


    return 0;
}
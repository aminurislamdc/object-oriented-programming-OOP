#include<iostream>
using namespace std;

int add(int a, int b) {
    cout << "Inside Non-Generic overloaded function..." << endl;
    return a + b;
}

// double add(double a, double b) {
//     return a - b;
// }

template<class T>
T add(T a, T b) {
    cout << "Inside Generic overloaded function..." << endl;
    return a + b;
}

int main() {

    cout << add(7, 8) << endl;
    cout << add(7.0, 8.1) << endl;
    return  0;
}
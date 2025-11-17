#include<iostream>

using namespace std;

template<class T>
class DataBox {
    private:
        T data;

    public:
        DataBox(T data) {
            this->data = data;
        }

        T getData() {
            return this->data;
        }

        void setData(T data) {
            this->data = data;
        }

        template<class U>
        U getU(U obj) {
            return obj;
        }
};

int main() {
    DataBox<int> intBox(7);
    DataBox<char> charBox('f');
    DataBox<double> doubleBox(7.81);

    cout << "Integer Data Box data: " << intBox.getData() << endl;
    cout << "Character Data Box data: " << charBox.getData() << endl;
    cout << "Double Data Box data: " << doubleBox.getData() << endl;

    cout << intBox.getU("Hlw World!") << endl;
    return 0;
}

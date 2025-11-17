#include<iostream>

using namespace std;

class Vehicle{
    protected:
        int speed;
        string colour;

    public:
        Vehicle(){
            this->speed = 0;
            cout << "Vehicle class default constructor is called..." << endl;
        }

        Vehicle(int speed, string colour){
            this->speed = speed;
            this->colour = colour;
            cout << "Vehicle class 2-params constructor is called..." << endl;
        }

        ~Vehicle(){
            cout << "Vehicle class destructor is called..." << endl;
        }

        int getSpeed(){
            return this->speed;
        }

        string getColour(){
            return this->colour;
        }

        void setSpeed(int speed){
            this->speed = speed;
        }

        void setColour(string colour){
            this->colour = colour;
        }
};

class Car: public Vehicle{
    protected:
        int noOfWheel;

    public:
        Car(){
            this->noOfWheel = 0;
            this->speed = 0;
            cout << "Car class default constructor is called..." << endl;
        }

        Car(int speed, string colour, int noOfWheel): Vehicle(speed, colour){
            this->noOfWheel = noOfWheel;
            cout << "Car class 3-params constructor is called..." << endl;
        }

        ~Car(){
            cout << "Car class destructor is called..." << endl;
        }

        int getNoOfWheel(){
            return this->noOfWheel;
        }

        void setNoOfWheel(int noOfWheel){
            this->noOfWheel = noOfWheel;
        }
};

int main(){
    Vehicle v1;
    Vehicle v2(60, "Red");

    Car c1;
    Car c2(70, "Blue", 4);
    return 0;
}

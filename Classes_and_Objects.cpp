#include<iostream>
#include<string>
using namespace std;

// Class Declaration
class student
{
private: // Encapsulation - hidden data
    string name;
    int age;
    double gpa;
    /* data */
public: // public interface
    // constructor
 student(string n, int a, double g){
    name = n;
    age = a;
    gpa = g;
 }

    void displayinfo(){
        cout << "Name:" << name << ", Age: " << age << ", GPA: " << gpa << endl;
    }


     void setGpa(double newGpa){
        if (newGpa >= 0.0 && newGpa <=4.0)
        {
            gpa = newGpa;
        }
        
     }

     double getGpa(){
        return gpa;
     }

     string getName(){
        return name;
     }

};

int main(){
    // create objects
    student student01("Aminur", 21, 3.6);
    student student02("Jannat", 18, 3.8);

    student01.displayinfo();
    student02.displayinfo();

    // Using getter/setter
    student01.setGpa(3.9);
    cout << student01.getName() << "'s new GPA: " << student01.getGpa() << endl;

    return 0;
}
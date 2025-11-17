#include<iostream>

using namespace std;

class Student{
    //Attributes
    private:
        string id;
        string name;
        double age;
        double cgpa;

    public:
        // 4 Params constructor
        Student(string i, string n, double a, double c){
            id = i;
            name = n;
            age = a;
            cgpa = c;
        }

        // 3 Params constructor
        Student(string i, string n, double a){
            id = i;
            name = n;
            age = a;
            cgpa = 0.0;
        }

        // Default constructor
        Student(){
            id = "";
            name = "";
            age = 18.0;
            cgpa = 0.0;
        }

        void display(){
            cout << "Student Info: " << endl;
            cout << "Student ID: " << id << endl;
            cout << "Student Name: " << name << endl;
            cout << "Student Age: " << age << endl;
            cout << "Student CGPA: " << cgpa << endl;
        }
};

int main(){
    Student s0;
    s0.display();

    Student s3("117", "Shihab", 22);
    s3.display();

    Student s4("092", "Korobi", 20.0, 3.22);
    s4.display();

    return 0;
}

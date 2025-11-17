#include <iostream>

using namespace std;

class Student{
    private:
        string id;
        string name;
        int age;
        double cgpa;

    public:
        Student(){
            age = 0;
            cgpa = 0.0;
            cout << "Student class's object with id- " << id << " is getting constructed using default constructor..." << endl;
        }

        Student(string i, string n, int a, double c){
            id = i;
            name = n;
            age = a;
            cgpa = c;
            cout << "Student class's object with id- " << id << " is getting constructed using 4-params constructor..." << endl;
        }

        ~Student(){
            cout << "Student class's object with id- " << id << " is getting destructed using destructor..." << endl;
        }

        string getId(){
            return id;
        }

        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        double getCgpa(){
            return cgpa;
        }

        void setId(string i){
            id = i;
        }

        void setName(string n){
            name = n;
        }

        void setAge(int a){
            age = a;
        }

        void setCgpa(double c){
            cgpa = c;
        }

        void display(){
            cout << "Student Information:" << endl;
            cout << "------------------------------------------------" << endl;
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "CGPA: " << cgpa << endl;
            cout << "------------------------------------------------" << endl;
        }
};

double calcAverageCgpa(Student s1, Student s2){
    return (s1.getCgpa() + s2.getCgpa()) / 2;
}

Student createSuperStudent(Student s1, Student s2){
    string newId = s1.getId() + " " + s2.getId();
    string newName = s1.getName() + " " + s2.getName();
    int newAge = s1.getAge() + s2.getAge();
    double newCgpa = calcAverageCgpa(s1, s2);

    Student superStudent(newId, newName, newAge, newCgpa);
    return superStudent;
}

int main() {
    Student s1;
    s1.setId("BUBT-CSE-001");
    s1.setName("Monica");
    s1.setCgpa(3.88);

    Student s2("BUBT-CSE-115", "Nabil", 20, 3.80);

    //cout << "Average CGPA: " << calcAverageCgpa(s1, s2) << endl;

    Student ss = createSuperStudent(s1, s2);
    ss.display();
    return 0;
}

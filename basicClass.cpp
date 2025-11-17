#include <iostream>

using namespace std;

class Vehicle
{
  // Attributes/Properties/Member Variables/Data
  private:
      string licenseId;
      string name;
      string brand;
      string model;
      double speed;
      double fuelCapacity;

  public:
      // Default Constructor
      Vehicle()
      {
        cout << "Vehicle class's Default Constructor is being called..." << endl;
        speed = 0.0;
        fuelCapacity = 0.0;
      }

      // 6-Parameterized Constructor
      Vehicle(string lid, string n, string b,string m, double s, double fc)
      {
        cout << "Vehicle class's 6-Params Constructor is being called..." << endl;
        licenseId = lid;
        name = n;
        brand = b;
        model = m;
        speed = s;
        fuelCapacity = fc;
      }

      // 4-Parameterized Constructor
      Vehicle(string lid, string n, string b,string m)
      {
        cout << "Vehicle class's 4-Params Constructor is being called..." << endl;
        licenseId = lid;
        name = n;
        brand = b;
        model = m;
        speed = 0.0;
        fuelCapacity = 0.0;
      }

      // Destructor
      ~Vehicle(){
        cout << "Vehicle class's Destructor is being called..." << endl;
      }

      // Getters/Accessors Functions/Methods
      string getLicenseId(){
        return licenseId;
      }

      string getName(){
        return name;
      }

      string getBrand(){
        return brand;
      }

      string getModel(){
        return model;
      }

      double getSpeed(){
        return speed;
      }

      double getFuelCapacity(){
        return fuelCapacity;
      }

      // Setters/Mutators Functions/Methods
      void setLicenseId(string lid){
        licenseId = lid;
      }

      void setName(string n){
        name = n;
      }

      void setBrand(string b){
        brand = b;
      }

      void setModel(string m){
        model = m;
      }

      void setSpeed(double s){
        speed = s;
      }

      void setFuelCapacity(double fc){
        fuelCapacity = fc;
      }

      // Other Functions/Methods
      void display(){
        cout << "Vehicle Information:" << endl;
        cout << "------------------------------" << endl;
        cout << "License ID: " << licenseId << endl;
        cout << "Name: " << name << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << endl;
        cout << "Fuel Capacity: " << fuelCapacity << endl;
      }
};

int main()
{
  Vehicle v1;
  Vehicle v2("DM-B-001", "Bus", "Eicher", "E-001", 0.0, 100.0);
  Vehicle v3("DM-C-001", "Car", "Toyota", "Allion-2023");

  v3.setFuelCapacity(40.0);
  v3.setSpeed(60);

  v1.display();
  v2.display();
  v3.display();
  return 0;
}

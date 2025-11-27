/*
A transport authority wants to automate vehicle registration. Create a class Vehicle that
demonstrates constructor overloading: The parameterized constructor accepts
registration_number, model, and price. Another constructor should initialize only
registration_number and model, assuming a default price value as 10000, Include a method to
display vehicle details.
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    private:
        string registration_number;
        string model;
        float price;

    public:
        // Parameterized constructor (all details)
        Vehicle(string reg, string mdl, float pr) {
            registration_number = reg;
            model = mdl;
            price = pr;
        }

        // Overloaded constructor (default price = 10000)
        Vehicle(string reg, string mdl) {
            registration_number = reg;
            model = mdl;
            price = 10000;
        }

        void display() {
            cout << "Vehicle Details:\n";
            cout << "Registration Number: " << registration_number << endl;
            cout << "Model: " << model << endl;
            cout << "Price: " << price << endl;
        }
};

int main() {
    // Using constructor with all parameters
    Vehicle v1("AP09AB1234", "Toyota Innova", 2500000);

    // Using constructor with default price
    Vehicle v2("TS07GH9876", "Honda Activa");

    cout << "\n--- Vehicle 1 ---\n";
    v1.display();

    cout << "\n--- Vehicle 2 ---\n";
    v2.display();

    return 0;
}
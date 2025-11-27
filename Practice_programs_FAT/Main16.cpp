/*
Write a program in C++ that implements a base class Vehicle with fields for maker, model,
and price. Create two derived classes, Car and Bike, each with additional specific attributes
(e.g., car type for Car, engine capacity for'Bike). Demonstrate polymorphism by creating a
virtual function displayDetails() in Vehicle and overriding it in derived classes to print
complete details of Car and Bike objects.

Sample Input:
Add car: Maker = Toyota, Model = Innova, Price=30000, Type = MUV
Add bike: Maker = Hero, Model = Glamour, Price = 15000, Engine =125cc
Sample Output:
Vehicle Type: Car, Maker: Toyota, Model: Innova, Price: 30000, Type: MUV
Vehicle Type: Bike, Maker: Honda, Model: Glamour, Price: 15000, Engine: 125cc
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string maker, model;
    float price;

public:
    Vehicle(string mk, string md, float pr) {
        maker = mk;
        model = md;
        price = pr;
    }

    virtual void displayDetails() {
        cout << "Vehicle Details\n";
    }
};

class Car : public Vehicle {
    string type;   // e.g., SUV, MUV
public:
    Car(string mk, string md, float pr, string t) : Vehicle(mk, md, pr) {
        type = t;
    }

    void displayDetails() override {
        cout << "Vehicle Type: Car, Maker: " << maker << ", Model: " << model << ", Price: " << price << ", Type: " << type << endl;
    }
};

class Bike : public Vehicle {
    string engine;   // e.g., 125cc
public:
    Bike(string mk, string md, float pr, string eng) : Vehicle(mk, md, pr) {
        engine = eng;
    }

    void displayDetails() override {
        cout << "Vehicle Type: Bike, Maker: " << maker << ", Model: " << model << ", Price: " << price << ", Engine: " << engine << endl;
    }
};

int main() {
    Car c("Toyota", "Innova", 30000, "MUV");

    Bike b("Hero", "Glamour", 15000, "125cc");

    // Polymorphic calls
    Vehicle *v1 = &c;
    Vehicle *v2 = &b;

    v1->displayDetails();
    v2->displayDetails();

    return 0;
}
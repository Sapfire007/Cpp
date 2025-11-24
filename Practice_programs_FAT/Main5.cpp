/*
Design a C++ program using multiple inheritance. Create a class Engine with data members for
horsepower and type (e.g., "V8") and methods to display these. Create a class Transmission with
data members for gears and type (e.g., "Automatic") and methods to display these. Derive a class
car from both Engine and Transmission, adding a method in Car to display all properties
(horsepower, engine type, gears, and transmission type). Demonstrate how Car inherits features from
both Engine and Transmission to create a comprehensive vehicle description.
*/



#include <iostream>
using namespace std;

class Engine {
    public:
        int horsepower;
        string type;

        void setEngine(int hp, string t) {
            horsepower = hp;
            type = t;
        }

        void showEngine() {
            cout << "Engine: " << horsepower << " HP, " << type << endl;
        }
};

class Transmission {
    public:
        int gears;
        string tType;

        void setTransmission(int g, string tt) {
            gears = g;
            tType = tt;
        }

        void showTransmission() {
            cout << "Transmission: " << gears << " gears, " << tType << endl;
        }
};

class Car : public Engine, public Transmission {
    public:
        void showCar() {
            showEngine();
            showTransmission();
        }
};


int main() {
    Car c;
    c.setEngine(450, "V8");
    c.setTransmission(6, "Automatic");
    c.showCar();
    return 0;
}
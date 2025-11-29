/*
Design a C++ program using nested classes. Create an Apartment class representing a building, with
a nested class Room to represent individual rooms. Apartment should contain an array of Room
objects, each with attributes like roomNumber and area. Implement methods to add and display
room details from the Apartment class.
*/


#include <iostream>
using namespace std;

class Apartment {
    public:
        class Room {               // nested class
            public:
                int roomNumber;
                float area;

                void set(int n, float a) {
                    roomNumber = n;
                    area = a;
                }

                void show() {
                    cout << "Room " << roomNumber << " - Area: " << area << endl;
                }
        };

        Room rooms[5];
        int count = 0;

        void addRoom(int n, float a) {
            rooms[count].set(n, a);
            count++;
        }

        void displayRooms() {
            for (int i = 0; i < count; i++)
                rooms[i].show();
        }
};

int main() {
    Apartment A;
    A.addRoom(101, 120.5);
    A.addRoom(102, 150.0);
    A.displayRooms();

    return 0;
}
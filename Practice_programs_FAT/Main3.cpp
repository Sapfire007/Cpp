/*
Design a C++ program to manage student records using an array of class objects. Create a Student
class with data private members name, rollNumber, and marks. Implement methods to input and
display student details. In main(), create an array of Student objects to handle 5 records effectively,
also print average marks for the class and name of student who is the topper.
*/


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    void input() {
        cout << "Enter name, roll, marks: ";
        cin >> name >> rollNumber >> marks;
    }

    void display() {
        cout << name << " " << rollNumber << " " << marks << endl;
    }

    float getMarks() { 
        return marks;
    }
    string getName() { 
        return name; 
    }
};

int main() {
    Student s[5];
    float sum = 0, maxMarks = -1;
    string topper;

    for(int i = 0; i < 5; i++) {
        s[i].input();
        sum += s[i].getMarks();
        if(s[i].getMarks() > maxMarks) {
            maxMarks = s[i].getMarks();
            topper = s[i].getName();
        }
    }

    for(int i = 0; i < 5; i++){
        s[i].display();
    }     

    cout << "Average Marks: " << sum / 5 << endl;
    cout << "Topper: " << topper << endl;

    return 0;
}
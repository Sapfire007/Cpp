/*
You need to manage payroll for a company. Each employee has an employeeID, name,position,
and salary. 
Create an Employee class with: A parameterized constructor and a copy constructor to
initialize employee details. 
A destructor to clean up resources when an employee object is deleted.
Methods to promote an employee by increasing their salary, and to display all employee
information. 
Use function overloading for promote, so it can take either a fixed amount or a
percentage as an argument to increase the salary. 
Write a C++ program to implement the above scenario.
*/


#include <iostream>
using namespace std;

class Employee{
    private:
        int employeeID;
        string name;
        string position;
        double salary;
    
    public:
        // Parameterized constructor
        Employee(int employeeID, string name, string position, double salary){
            this->employeeID = employeeID;
            this->name = name;
            this->position = position;
            this->salary = salary;
        }
        
        // Copy constructor
        Employee(const Employee &e){
            this->employeeID = e.employeeID;
            this->name = e.name;
            this->position = e.position;
            this->salary = e.salary;
        }

        // Destructor
        ~Employee(){
            // Only for demonstrating destructor call in exam
            cout << "Destructor called for Employee ID " << employeeID << endl;
        }

        // promote(): increase salary by fixed amount
        void promote(int amount) {
            salary += amount;
        }

        // promote(): increase salary by fixed percentage
        void promote(double percentage){
            salary += salary * (percentage/100);
        }

        // Display employee details
        void display() {
            cout << "\nEmployee ID: " << employeeID;
            cout << "\nName: " << name;
            cout << "\nPosition: " << position;
            cout << "\nSalary: " << salary << "\n";
        }
};

int main(){
    Employee e1(17, "Saptarshi", "Developer", 50000);
    e1.display();
    e1.promote(5000);
    cout << "\nAfter fixed raise:";

    // Display original
    e1.display();

    // Promotion by fixed amount
    e1.promote(5000);
    cout << "\nAfter fixed raise:";
    e1.display();

    // Promotion by percentage
    e1.promote(10.0);
    cout << "\nAfter percentage raise:";
    e1.display();

    // Copy constructor example
    Employee e2 = e1;
    cout << "\nCopied Employee details:";
    e2.display();

    return 0;
}
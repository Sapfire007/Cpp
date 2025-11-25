/*
Write a C++ program to design a payroll system where employees have different payment
structures. The base class is Employee, which has a virtual function calculatePay(). Derived classes
HourlyEmployee and SalariedEmployee each implement calculatePay() differently. Implement the
classes such that HourlyEmployee calculates pay based on hourly rate and hours worked, while
SalariedEmployee calculates a fixed salary. Use Employee pointers to store both types of
employees and call calculatePay() polymorphically.


ChatGPT explanation:
Write a C++ program to design a payroll system where employees have different payment structures.
The base class Employee has a virtual function calculatePay().
Two derived classes:

HourlyEmployee → calculates pay using hourly rate × hours worked

SalariedEmployee → calculates pay using a fixed monthly salary

Use Employee pointers to store both types of employees and call calculatePay() polymorphically.
*/


#include <iostream>
using namespace std;

class Employee{
    public:
        virtual double calculatePay() = 0;
        virtual void display() = 0;
        virtual ~Employee(){} 
};

class HourlyEmployee : public Employee{
    private:
        double hourlyRate;
        double hoursWorked;
    public:
        HourlyEmployee(double hourlyRate, double hoursWorked){
            this->hourlyRate = hourlyRate;
            this->hoursWorked = hoursWorked;
        }

        double calculatePay() override{
            return hourlyRate * hoursWorked;
        }

        void display() override {
            cout << "Hourly Employee" << endl;
            cout << "Hourly Rate: " << hourlyRate << endl;
            cout << "Hours Worked: " << hoursWorked << endl;
        }
};

class SalariedEmployee : public Employee{
    private:
        double salary;
    
    public:
        SalariedEmployee(double salary){
            this->salary = salary;
        }

        double calculatePay() override{
            return salary;
        }

        void display() override{
            cout << "Salaried Employee" << endl;
            cout << "Monthly Salary: " << salary << endl;
        }
};


int main(){
    Employee *employees[10];
    int count = 0;
    char choice;

    do {
        cout << "\nEnter employee type (H for Hourly, S for Salaried): ";
        cin >> choice;

        if (choice == 'H' || choice == 'h') {
            double rate, hours;
            cout << "Enter hourly rate: ";
            cin >> rate;
            cout << "Enter hours worked: ";
            cin >> hours;

            employees[count] = new HourlyEmployee(rate, hours);
        }
        else if (choice == 'S' || choice == 's') {
            double salary;
            cout << "Enter monthly salary: ";
            cin >> salary;

            employees[count] = new SalariedEmployee(salary);
        }
        else {
            cout << "Invalid choice!" << endl;
            continue;
        }

        count++;

        cout << "Add another employee? (y/n): ";
        cin >> choice;

    } while ((choice == 'y' || choice == 'Y') && count < 10);


    cout << "\n\n--- Payroll Details ---\n";
    for (int i = 0; i < count; i++) {
        employees[i]->display();
        cout << "Calculated Pay: " << employees[i]->calculatePay();
        cout << "\n------------------------\n";
    }

    // Cleanup
    for (int i = 0; i < count; i++) {
        delete employees[i];
    }

    return 0;
}
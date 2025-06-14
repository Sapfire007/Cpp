#include <iostream>

int main(){

    using namespace std;

    double temp;
    double convertedTemp;
    int choice;
    
    char unit;
    
    cout << "********** TEMPERATURE CONVERTER **********\n";
    cout << "What is the format of your temperature ? (Enter F for Fahrenheit and C for Celcius) \n";
    cin >> unit;
    unit = toupper(unit);
    
    switch(unit){
        case 'F':
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        convertedTemp = (5.0/9.0)*(temp-32);
        cout << "Converted temperature to Celcius: " << convertedTemp << "deg. Celcius\n";
        break;
        
        case 'C':
        cout << "Enter the temperature in Celcius: ";
        cin >> temp;
        convertedTemp = ((9.0/5.0)*(temp))+32;
        cout << "Converted temperature to Fahrenheit: " << convertedTemp << "deg. Fahrenheit\n";
        break;
        
        default:
        cout << "Invalid input.";
    }
    cout << "*******************************************";
    

    return 0;
}
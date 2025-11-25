/*
Write a C++ program to create a RestaurantMeal class that holds the name and price of a food item served by a restaurant. 
Its constructor requires arguments for each field.

Create a HotelService class that holds the name of the service, the service fee, and the room number to which the service was supplied. 
Its constructor also requires arguments for each field.

Create a RoomServiceMeal class that inherits from both RestaurantMeal and HotelService. 
Whenever you create a RoomServiceMeal object, the constructor assigns the string "room service" to the name of the service field, 
and $4.00 is assigned to the service fee inherited from HotelService.

Include a display() function that displays all fields in a RoomServiceMeal by calling display functions of the two parent classes. 
Additionally, the display function should show the total of the meal and the room service fee.

In main(), instantiate a RoomServiceMeal object that inherits from both classes.
Example: a “steak dinner” costing $19.99 is a "room service" provided to room 1202 for a $4.00 fee.
*/

#include <iostream>
#include <string>
using namespace std;

class RestaurantMeal{
    protected:
        string mealName;
        double mealPrice;
    
    public:
        RestaurantMeal(string mealName, double mealPrice){
            this->mealName = mealName;
            this->mealPrice = mealPrice;
        }

        void displayMeal() {
            cout << "Meal Name: " << mealName << endl;
            cout << "Meal Price: $" << mealPrice << endl;
        }
};

class HotelService{
    protected:
        string serviceName;
        double serviceFee;
        int roomNumber;

    public:
        HotelService(string serviceName, double serviceFee, int roomNumber){
            this->serviceName = serviceName;
            this->serviceFee = serviceFee;
            this->roomNumber = roomNumber;
        }

        void displayService(){
            cout << "Service Name: " << serviceName << endl;
            cout << "Service Fee: $" << serviceFee << endl;
            cout << "Room Number: " << roomNumber << endl;
        }
};

class RoomServiceMeal : public RestaurantMeal, public HotelService{
    public:
        RoomServiceMeal(string meal, double price, int room) : RestaurantMeal(meal, price), HotelService("room service", 4.00, room){}
    
    void display() {
        cout << "\n--- Room Service Meal Details ---\n";
        displayMeal();
        displayService();
        cout << "Total Cost: $" << mealPrice + serviceFee << endl;
    }
};

int main(){
    RoomServiceMeal r("Chicken Biryani", 14.99, 7);
    r.display();
    return 0;
}
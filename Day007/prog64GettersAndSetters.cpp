#include <iostream>

class Stove{

    private:
        int temperature = 0;

    public:
        int getTemperature(){
            return temperature;
        }
        void setTemperature(int temperature){
            if(temperature<0){
                this->temperature = 0;
            }
            else if(temperature >= 10){
                this->temperature = 10;
            }
            else{
                this->temperature = temperature;
            }
        }

};

int main(){

    /*
        Abstraction = hiding unnecessary data from outside a class
        getter = function that makes a private attribute READABLE
        setter = function that makes a private attribute WRITEABLE
    */

    
    Stove stove;

    // stove.temperature = 10000000;
    // std::cout << "The temperature setting is: " << stove.temperature;
    std::cout << "The temperature setting is: " << stove.getTemperature() << '\n';
    
    stove.setTemperature(1000000);
    std::cout << "The temperature setting is: " << stove.getTemperature() << '\n';

    return 0;
}
#include <iostream>

int main(){

    int students = 25;
    students++;
    students--;
    students-=2; // students = students - 2;
    students*=2;

    students = 25;
    students/=2;
    std::cout << students << '\n'; // Output: 12

    int remainder = students % 5;
    std::cout << remainder << '\n';
    return 0;
}
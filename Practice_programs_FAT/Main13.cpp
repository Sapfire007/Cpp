/*
Write a C++ program to create a Class Point with x and y coordinates. Overload = = operator to check if two points are equal
*/


#include <iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }

        // Overload == operator
        bool operator==(const Point &p) {
            return (x == p.x && y == p.y);
        }
};

int main(){
    int x1, y1, x2, y2;

    cout << "Enter coordinates of Point 1 (x y): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of Point 2 (x y): ";
    cin >> x2 >> y2;

    Point p1(x1, y1);
    Point p2(x2, y2);

    if (p1 == p2){
        cout << "Both points are equal";
    }
    else{
        cout << "Points are not equal";
    }
    
    return 0;
}
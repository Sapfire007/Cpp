#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = 6*side*side;
        this->volume = side*side*side;
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4*3.14159*(radius*radius);
        this->volume = (4/3.0)*3.14159*(radius*radius*radius);
    }
};

int main(){

    Cube cube(10);
    std::cout << "Area (cube): " << cube.area << " sq. units" << '\n';
    std::cout << "Volume (cube): " << cube.volume << " cu. units" << '\n';
    
    Sphere sphere(5);
    std::cout << "Area (sphere): " << sphere.area << " sq. units" << '\n';
    std::cout << "Volume (sphere): " << sphere.volume << " cu. units" << '\n';

    return 0;
}
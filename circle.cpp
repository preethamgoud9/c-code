#include <iostream>

int main() {
    double radius;
    double area;
    const double pi = 3.14159;
    std::cout << "enter the radius of circle" << std::endl;
    std::cin >> radius;
    area = pi * radius * radius;
    std::cout << "the area of the circle is" << area << std::endl;
    return 0; 
}
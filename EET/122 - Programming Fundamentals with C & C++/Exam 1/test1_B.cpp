#include <cmath>
#include <iostream>

int main(){    
    
        double length, height, area;    
        std::cout << "Please input the length of the Hexagonal prism:\n-> ";
        std::cin >> length;    
        std::cout << "Please input the height of the Hexagonal prism:\n-> ";
        std::cin >> height;    
        area = (6*length*height)+(3*sqrt(3)*pow(length, 2));    
        std::cout << "The area of the Hexagonal prism is: " << area << std::endl;
    
        return 0;    
}    

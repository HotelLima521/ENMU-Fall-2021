#include <iostream>


float Trian_area(float base, float height){
	return 0.5*base*height;
}

float Rect_area(float base, float width){
	return base*width;
}

int main(){
	
	float base, height, width, area1, area2, total_area;

	std::cout << "Enter the value of base, height, and width in feet: ";
	std::cin >> base >> height >> width;
	area1 = Trian_area(base, height);
	area2 = Rect_area(base, width);
	total_area = area1 + area2;
	std::cout << "Total surface area of the shape: " << total_area << std::endl;

	return 0;
}

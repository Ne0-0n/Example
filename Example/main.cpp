#include <iostream>
#include "Triangle.h"



int main() {
	
	double s;
	double a, h;
	std::cout << "Input side and height: ";
	std::cin >> a >> h;
	Triangle triangle(a,h);
	s = triangle.calculate_area();
	std::cout << "Area= " << s;
	return 0;
}
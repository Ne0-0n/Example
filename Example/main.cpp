#include <iostream>
#include "Triangle.h"



int main() {
	Triangle triangle;
	double s;
	s = triangle.calculate_area();
	std::cout << s;
	return 0;
}
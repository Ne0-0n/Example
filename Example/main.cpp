#include <iostream>
int main(){
	double a, h, s;
	std::cout << "Input side and height: ";
	std::cin >>  a >> h;
	s = 0.5 * a * h;
	std::cout << "Area =" << s << std::endl;

	return 0;
}
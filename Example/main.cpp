#include <iostream>

class Triangle {
	int _side;
	int _h;
public:
	Triangle();
	Triangle(int, int);
	Triangle(const Triangle&);

	int side();
	int h();

	void side(int);
	void h(int);

	double calculate_area();
};

Triangle::Triangle() {
	_side = 1;
	_h = 3;
}
Triangle::Triangle(int side, int h) {
	_side = side;
	_h = h;
}
Triangle::Triangle(const Triangle& other) {
	_side = other._side;
	_h = other._h;
}

int Triangle::side() {
	return _side;
}
int Triangle::h() {
	return _h;
}

void Triangle::side(int side) {
	_side = side;
}
void Triangle::h(int h) {
	_h = h;
}

double Triangle::calculate_area() {
	return 0.5 * _side * _h;
}



int main(){
	Triangle triangle;
	double s;
	s = triangle.calculate_area();
	std::cout << s;
	return 0;
}
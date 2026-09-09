#include "Triangle.h"


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




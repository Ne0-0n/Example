#pragma once
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
#pragma once
#include "Circle.h"
class Cylinder {
	int height;
	Circle Base;
public:
	Cylinder();
	Cylinder(int height, Circle Base);
	void user_Input();
	void set_height(int height);
	void set_CircleBase(Circle Base);
	int get_height();
	Circle get_CircleBase();
	void display();
	float ComputeArea();
	bool isGreater(Cylinder C2);
	bool  operator>(Cylinder C2);
	bool  operator==(Cylinder C2);

};
void Validate_Input(int start, int& input, int end);
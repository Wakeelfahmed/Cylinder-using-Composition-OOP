#pragma once
#include "myClass.h" //Done by Sir
class Circle
{
private:
	Point Center_Cordinates;	
	float radius;
public:
	Circle();
	Circle(Point Center_Cordinates, float radius);
	void User_Input();
	void set_radius(int radius);
	void set_Center_Cordinates_Points(Point Center_Cordinates);
	float get_radius();
	Point get_Center_Cordinates_Points();
	void display_Circle();
};
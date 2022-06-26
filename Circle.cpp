#include<iostream>
#include "Circle.h"
using namespace std;
Circle::Circle() : radius(0) {}
Circle::Circle(Point Center_Cordinates, float radius)
{
	this->Center_Cordinates = Center_Cordinates;
	this->radius = radius;
}
void Circle::User_Input() {
	Center_Cordinates.User_Input();
	cout << "Enter the Radius:";
	cin >> radius;
}
void Circle::set_radius(int radius) 
	{ this->radius = radius; }
void Circle::set_Center_Cordinates_Points(Point Center_Cordinates) 
	{ this->Center_Cordinates = Center_Cordinates; }
float Circle::get_radius() { return radius; }

Point Circle::get_Center_Cordinates_Points() 
{ return Center_Cordinates; }
void Circle::display_Circle() {
	Center_Cordinates.display_Point();
	cout << "Radius of Cylinder is:" << radius << "cm" << endl;
}
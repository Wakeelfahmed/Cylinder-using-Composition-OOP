#include<iostream>
#include "cylinder.h"
using namespace std;
Cylinder::Cylinder() : height(0) {}
Cylinder::Cylinder(int height, Circle Base) {
	this->height = height;
	this->Base = Base;
}
void Cylinder::user_Input() {
	Base.User_Input();
	cout << "Enter height:";
	cin >> height;
}
void Cylinder::set_height(int height) { this->height = height; }
void Cylinder::set_CircleBase(Circle Base) { this->Base = Base; }
int Cylinder::get_height() { return height; }
Circle Cylinder::get_CircleBase() { return Base; }
void Cylinder::display() {
	cout << "height is:" << height << "cm" << endl;
	Base.display_Circle();
}
float Cylinder::ComputeArea() {
	return (3.14 * (Base.get_radius() * Base.get_radius()) * float(height));
}
bool Cylinder::isGreater(Cylinder C2) {
	if (ComputeArea() > C2.ComputeArea())
		return true;
	else
		return false;
}
bool Cylinder::operator >(Cylinder C2)
{
	if (this->ComputeArea() > C2.ComputeArea())
		return true;
	else
		return false;
}
bool Cylinder::operator == (Cylinder C2) {
	if (this->ComputeArea() == C2.ComputeArea())
		return true;
	else
		return false;
}
void Validate_Input(int start, int & input, int end)	//Global function
{
	while (input < start || input >end)
		cin >> input;
}


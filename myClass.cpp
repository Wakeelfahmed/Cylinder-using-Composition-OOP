#include<iostream>
#include "myClass.h"
using namespace std;
#pragma once
Point::Point() : x(0), y(0) {}
Point::Point(int x, int y) {
	this->x = x; this->y = y;
}
void Point::set_x(int x) 
{ this->x = x; }
void Point::set_y(int y) 
{ this->y = y; }
void Point::User_Input() {
	cout << "Enter the Center coordinates x & y:";
	cin >> x >> y;
}
int Point::get_x() 
{ return x; }
int Point::get_y() { return y; }
void Point::display_Point() {
	cout << "x & y coordinates are: (" << x << "," << y << ")" << endl;
}
Point::~Point() {}

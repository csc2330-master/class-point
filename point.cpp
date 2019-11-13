//
// Created by Arias Arevalo, Carlos on 11/13/19.
//
#include "point.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using std::ostream;
using std::istream;
using std::string;
using std::stringstream;


Point::Point(){
    _x = _y = 0.0;
}
Point::Point(double x, double y){
    _x = x;
    _y = y;
}
double Point::GetX()const{ // These are methods that cannot change this
    return _x;
}
double Point::GetY()const{
    return _y;
}
void Point::SetX(double x){
    _x = x;
}
void Point::SetY(double y){
    _y = y;
}
void Point::Read(istream& input){
    input >> _x >> _y;
}
void Point::Write(ostream& output)const{
    output << _x << " " << _y;
}
string Point::ToString()const{
    stringstream ss;
    ss << "[" << _x << ", " << _y << "]";
    return ss.str();
}
double Point::Distance(const Point& p) const {
    return sqrt(pow(p._x - _x, 2.0) + pow(p._y - _y, 2.0));
}


//
// Created by Arias Arevalo, Carlos on 11/13/19.
//

#ifndef CLASS_POINT_POINT_H
#define CLASS_POINT_POINT_H

#include <iostream>
#include <string>
using std::ostream;
using std::istream;
using std::string;


// Class Declaration
class Point{
private:
    double _x, _y;
public:
    Point();
    Point(double, double);
    double GetX()const; // These are methods that cannot change this
    double GetY()const;
    void SetX(double);
    void SetY(double);
    void Read(istream&);
    void Write(ostream&)const;
    string ToString()const;
    // The parameter by reference to save time and space (memory)
    // also constant to avoid changing the param inside the method
    // the method itself is const because it cannot change this
    double Distance(const Point&)const;
};



#endif //CLASS_POINT_POINT_H

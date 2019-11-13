#include <iostream>
#include <string>
#include <sstream>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::string;
using std::stringstream;

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


int main() {
    Point a;
    Point b(1,1);
    cout << a.ToString() << endl;
    cout << b.ToString() << endl;

    cout << a.Distance(b) << endl;
    return 0;
}
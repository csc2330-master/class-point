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



int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
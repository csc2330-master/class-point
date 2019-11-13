#include <iostream>


#include "point.h"

using std::cout;
using std::cin;
using std::endl;




int main() {
    Point a;
    Point b(1,1);
    cout << a.ToString() << endl;
    cout << b.ToString() << endl;

    cout << a.Distance(b) << endl;
    return 0;
}
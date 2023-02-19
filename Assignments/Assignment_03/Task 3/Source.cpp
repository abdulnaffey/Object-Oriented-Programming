#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    Circle c(5);
    Square s(7);
    Sphere sp(9);
    Cube cu(10);
    Triangle t(2, 2);
    Tetrahedron th(8);


    cout << "Circle area: " << c.area() << endl;
    cout << "Square area: " << s.area() << endl;
    cout << "Triangle area: " << t.area() << endl;
    cout << "Sphere volume: " << sp.volume() << endl;
    cout << "Tetrahedron volume: " << th.volume() << endl;
    cout << "Cube volume: " << cu.volume() << endl;


    return 0;
}

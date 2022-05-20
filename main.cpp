#include <iostream>
#include <math.h>
#include "vector3.h"

using namespace std;

int main()
{
    vector a;
    a = a.vector3(4, 6, 8);
    vector b;
    b.x = 4;
    b.y = 5;
    b.z = 9;
    vector c = a.Add(b);
    vector d = a.Subtract(b);
    c.Print();
    d.Print();
    cout << c.Magnitude() << "\n";
    vector e = Cross(a, b);
    float f = Dot(a, b);
    e.Print();
    cout << f << "\n" ;   
    return 0;
}
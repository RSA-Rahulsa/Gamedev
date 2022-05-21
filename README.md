# Gamedev
The following program (vector3.cpp) contains all the basic functions on vectors. 



#include <iostream>
#include <math.h>
returns
using namespace std;

class vector                                                    // created class vector with 3 parameters x,y,z representing the three axes of the coordinate plane 
{
    public:
    float x;
    float y;
    float z;
    vector vector3(float x, float y, float z)                 // function used for declaring vector in 3d. function takes the parameters x,y,z as coordinates of vector
    {
        vector a;
        a.x = x;
        a.y = y;
        a.z = z;
        return a;
    }
    
    void Print()                                                // function prints the vector in the format (x,y,z) 
    {
        cout << "(" << x << ", " << y << ", " << z << ")\n";  
    }
    
    vector Add(vector v)                                        // function returns the resultant of the two vectors "a" and "v".
    {
        vector a;
        a.x = v.x + x;
        a.y = v.y + y;
        a.z = v.z + z;
        return a;
    }
    
    vector Subtract(vector v)                                  // function returns the resultant of the two vectors "a" and "-v".
    {
        vector a;
        a.x = -v.x + x;
        a.y = -v.y + y;
        a.z = -v.z + z;
        return a;
    }
    
    float Magnitude()                                          // function returns the length (magnitude) of the vector. It does not return a vector.
    {
        return sqrt((pow(x, 2) + pow(y, 2) + pow(z, 2)));
    }
    
};

float Dot(vector a, vector b)                                 // function returns the scalar product of two vectors.
{
    vector c;
    c.x = (a.x)*(b.x);
    c.y = (a.y)*(b.y);
    c.z = (a.z)*(b.z);
    return c.x+c.y+c.z ;
}

vector Cross(vector a, vector b)                           // function retuns the vector product of two vectors.   
{
    vector c;
    c.x = (a.y)*(b.z) - (a.z)*(b.y);
    c.y = (a.z)*(b.x) - (a.x)*(b.z);
    c.z = (a.x)*(b.y) - (a.y)*(b.x);
    return c;
}
  
  
 The main.cpp program showcase the fuctionality of all the above mentioned functions in vector3.cpp. Main.cpp uses the header file "vector.h" containing the functions reqiured for basic operations on vectors.
  
  
  
  
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

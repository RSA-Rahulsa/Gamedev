#include <iostream>
#include <math.h>

using namespace std;

class vector
{
    public:
    float x;
    float y;
    float z;
    vector vector3(float x, float y, float z)
    {
        vector a;
        a.x = x;
        a.y = y;
        a.z = z;
        return a;
    }
    
    void Print()
    {
        cout << "(" << x << ", " << y << ", " << z << ")\n";  
    }
    
    vector Add(vector v)
    {
        vector a;
        a.x = v.x + x;
        a.y = v.y + y;
        a.z = v.z + z;
        return a;
    }
    
    vector Subtract(vector v)
    {
        vector a;
        a.x = -v.x + x;
        a.y = -v.y + y;
        a.z = -v.z + z;
        return a;
    }
    
    float Magnitude()
    {
        return sqrt((pow(x, 2) + pow(y, 2) + pow(z, 2)));
    }
    
};

float Dot(vector a, vector b)
{
    vector c;
    c.x = (a.x)*(b.x);
    c.y = (a.y)*(b.y);
    c.z = (a.z)*(b.z);
    return c.x+c.y+c.z ;
}

vector Cross(vector a, vector b)
{
    vector c;
    c.x = (a.y)*(b.z) - (a.z)*(b.y);
    c.y = (a.z)*(b.x) - (a.x)*(b.z);
    c.z = (a.x)*(b.y) - (a.y)*(b.x);
    return c;
}
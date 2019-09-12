#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Point3D
{
private:
    double x,y,z;
public:
    Point3D ( double X, double Y, double Z)
    {
        x = X;
        y = Y;
        z = Z;
    }
    double distanceFromCenter()
    {
        return distanceFrom(0,0,0);
    }
    double distanceFrom(Point3D other)
    {
        return sqrt(pow(x-other.x,2) + pow(y-other.y,2) + pow(z-other.z,2));
    }
    double distanceFrom(double xVal, double yVal, double zVal)
    {
        return sqrt(pow(x-xVal,2) + pow(y-yVal,2) + pow(z-zVal,2));
    }
    void details()
    {
        cout<<" x= " <<x<<" y= "<<y<<" z= "<<z<<"\n";
    }
};
main()
{
    Point3D p1(2, 3, 4);
    Point3D p2(3, 7, 8);
    cout<<"point 1: ";
    p1.details();
    cout<<"point 2: ";
    p2.details();
    cout<<"\nThe distance between point 1 and (0,0,0) is : "<<p1.distanceFromCenter();
    cout<<"\nThe distance between point 1 and point 2 is : "<<p1.distanceFrom(p2);
    getch();
}

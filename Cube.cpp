#include <iostream>
#include <conio.h>
using namespace std;

class Cube
{
    private:
        double size = 10;
    public:
        Cube ( double val)
        {
            if(val>0)
            {
                size = val;
            }
        }
    void setSize(double val)
    {
        if (val>0)
        {
            size = val;
        }
    }
    double getSize()
    {
        return size;
    }
    double volume()
    {
        return size*size*size;

    }
    void details()
    {
        cout<<"\n\tDetails of Cube";
        cout<<"width ="<<size<<"\n";
        cout<<"height ="<<size<<"\n";
        cout<<"length ="<<size<<"\n";
        cout<<"volume ="<<volume()<<"\n";
    }
};
main()
{
    Cube cube1(4), cube2(3), cube3(-2);
    cube1.details();
    cube2.details();
    cube3.details();
    getch();
}

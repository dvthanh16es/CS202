#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class CommonDivisor
{
public:
    static int comDiv(int a, int b)
    {
        return (b==0)?a : comDiv(b, a%b);
    }
};

main()
{
    int a;
    int b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"USCLN cua "<<a<<" va "<<b<<" la "<<CommonDivisor::comDiv(a,b);
}

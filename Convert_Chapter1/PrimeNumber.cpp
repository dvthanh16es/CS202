#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
    int N;
    int i;

    cout<<"N = ";
    cin>>N;

    for (i=2; i<=round(sqrt(N)); i++)
    {
        if(N%i==0)
        {
            break;
        }
        if(i<= round(sqrt(N)))
        {
            cout<<"N khong phai so nguyen to";
        }
        else
        {
            cout<<"N la so nguyen to";
        }
    }
}

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
    float a,b,c;

    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    if((a+b>c) && (a+c>b) && (b+c>a) && (a>0) && (b>0) && (c>0))
    {
        cout<<"a, b, c la canh cua ";
        if ((a==b) && (b==c))
        {
            cout<<"Tam giac deu";
        }
        else if((a==b)||(b==c)||(a==c))
        {
            cout<<"Tam giac can";
        }
        else if (((a*a+b*b==c*c)&&(a==b)) || ((a*a+c*c==b*b)&&(a==c)) || ((c*c+b*b==a*a)&&(c==b)))
        {
            cout<<"Tam giac vuong can";
        }
        else if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (c*c+b*b==a*a))
        {
            cout<<"Tam giac vuong";
        }
        else
        {
            cout<<"Tam giac thuong";
        }
    }
    else
    {
        cout<<"3 canh tam giac khong hop le";
    }
}

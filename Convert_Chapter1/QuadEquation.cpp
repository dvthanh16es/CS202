#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
    float a,b,c,x1,x2,del;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    if (a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                cout<<"Phuong trinh vo so nghiem";
            }
            else
            {
                cout<<"Phuong trinh vo nghiem";
            }
        }
        else
        {
            cout<<"Phuong trinh co nghiem = "<<(-c/b);
        }
    }
    else
    {
        del = b*b - 4*a*c;
        if (del < 0)
        {
            cout<<"Phuong trinh vo nghiem";
        }
        else if (del==0)
        {
            x1=x2=-b/(2*a);
            cout<<"Phuong trinh co nghiem kep = "<< x1;
        }
        else
        {
            x1 = float (-b+sqrt(del))/(2*a);
            x2 = float (-b-sqrt(del))/(2*a);
            cout<<"Phuong trinh 2 nghiem: \n x1 = "<<x1<<"\n x2 = "<<x2;
        }
    }
}

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
    int N;
    cout<<"N = ";
    cin>>N;

    //Dap an 1:
    int sum =0;
    for (int i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"Sum = "<<sum;

    //Dap an 2:
    for(int i=2; i<=N; i+=2)
    {
        sum+=i;
    }
    cout<<"Sum = "<< sum;
}

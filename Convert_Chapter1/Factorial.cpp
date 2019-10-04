#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Factorial
{
public:
    static long fact(int n)
    {
        int kq =1;
        for (int i=2; i<=n; i++)
            kq*=i;
        return kq;
    }
};

main()
{
    long S = Factorial::fact(7) + Factorial::fact(10) + Factorial::fact(12) + Factorial::fact(14);
    cout<<" Sum = "<<S;
}

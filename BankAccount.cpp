#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class bankaccount
{
private:
    string name;
    double balance, dep=0, wdr=0;
    long id;
public:
    bankaccount (string Name,long Id, double Balance)
    {
         name = Name;
         id = Id;
         balance = Balance;
    }
    void WithdrawOrDeposit()
    {
         int n;
         double val;
         cout<<"\n1. Deposit\n2. Withdraw\n0. Exit\n----------\n";
         cin>>n;
         while(n!=0 && n!=1 && n!=2)
            {
                cout<<"Input is false, again : ";
                cin>>n;
            }
         switch(n)
         {
         case 1:
            {
                cout<<"\nValues : ";
                cin>>val;
                deposit(val);
                break;
            }
         case 2:
            {
                cout<<"\nValues : ";
                cin>>val;
                while (val<0 || val>balance)
                {
                    cout<<"Withdraw values must be lower than balance and higher than 0 : ";
                    cin>>val;
                }
                withdraw(val);
                break;
            }
         case 0:
            {
                break;
            }
         }
    }
    void deposit(double val)
    {
        cout<<"\nYou add "<<val<<" to your balance";
        dep=val;
    }
    void withdraw(double val)
    {
        cout<<"\nYou withdraw "<<val<<" from your balance";
        wdr=val;
    }
    double newbalance()
    {
         balance = balance-wdr+dep;
         return balance;
    }
    void details()
    {
         cout<<"\nName : "<<name;
         cout<<"\nAccount's ID : "<<id;
         cout<<"\nAccount's balance : "<<balance;
         WithdrawOrDeposit();
         cout<<"\nAccount's new balance test: "<<newbalance();
    }
};
main()
{
    bankaccount acc1("Do Van Thanh", 280598, 211298);
    acc1.details();
    getch();
}

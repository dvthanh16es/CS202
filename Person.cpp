#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Person
{
private:
    string name,address;
    int age;
public:
    Person(string name, int age, string address)
    {
        this->name=name;
        this->age=age;
        this->address=address;
    }
    void display()
    {
        cout << "Nhan vien: " << name <<" Age: " <<age <<" Tai dia chi: " << address <<endl;
    }
};

class Employee : private Person // (class Employee extends Person) in Java
{
private:
    float salary,rate;
public:
    Employee(string name, int age, string address, float salary, float rate):Person(name,age,address) // (super(name,age,address)) in Java
    {
        this->salary=salary;
        this->rate=rate;
    }
    float totalSalary()
    {
        return salary*rate;
    }
    void Display()
    {
        display();
        cout <<  "Co tong luong la: " <<totalSalary();
    }
};
int main()
{
    cout << "Hello User!" << endl;
    Employee A("Dung",30,"Quang Nam",11050,3.66f);
    A.Display();
    return 0;
}

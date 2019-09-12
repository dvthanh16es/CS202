#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class Student
{
private:
    string name;
    long id;
    double mathMark, englishMark, physicsMark, chemistryMark;
public:
    Student(string Name, long Id)
    {
        name = Name;
        id = Id;
    }
    void setMathMark(double val)
    {
        if (val>=0&&val<=100)
        {
            mathMark = val;
        }
    }
    void setEnglishMark(double val)
    {
        if (val>=0&&val<=100)
        {
            englishMark = val;
        }
    }
    void setPhysicsMark(double val)
    {
        if (val>=0&&val<=100)
        {
            physicsMark = val;
        }
    }
    void setChemistryMark(double val)
    {
        if (val>=0&&val<=100)
        {
            chemistryMark = val;
        }
    }
    double getAverage()
    {
        double result=0;
        result=(mathMark+englishMark+physicsMark+chemistryMark)/4;
        return result;
    }
    void displayDetails()
    {
        cout<<"\nName = "<<name;
        cout<<"\nStudent's ID = "<<id;
        cout<<"\nAverage = "<<getAverage();
    }
};

main()
{
    Student std1("Do Van Thanh",123160066);
    std1.setChemistryMark(98);
    std1.setEnglishMark(88);
    std1.setPhysicsMark(78);
    std1.setMathMark(100);
    std1.displayDetails();
    getch();
}

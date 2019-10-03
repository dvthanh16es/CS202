#include <iostream>
#include <conio.h>
using namespace std;

class Vector
{
private:
    int n;
    float *data;
public:
    Vector()
    {
        cout<<"Enter the number of elements ";
        cin>>n;
        data = new float[n];
        cout<<"\n Enter"<< n << " elements : ";
        for(int i =0; i<n; i++)
        {
            cin>>data[i];
        }
    }
    void Clear()
    {
        delete[] data;
        n=0;
    }
    int capacity()
    {
        return n;
    }
    bool contains(float elem)
    {
        for(int i=0; i<n; i++)
        {
            if (data[i]==elem)
                return true;
            else
                return false;
        }
    }
    int indexOf(float elem)
    {
        int outp = -1;
        for(int i = 0; i<n; i++)
        {
            if (data[i]==elem)
            {
                outp= i+1;
            }
        }
        return outp;

    }
    float elementAt (int index)
    {
        return data[index-1];
    }
    bool isEmpty()
    {
        if(n==0)
            return true;
        else
            return false;
    }
    int lastIndexOf(float elem)
    {
        int outp = -1;
        for(int i=n-1; i>0; i--)
        {
            if (data[i] == elem)
                outp = i+1;
        }
        return outp;
    }
    void display()
    {
        cout<<"\n Vector : ";
        for(int i=0; i<n; i++)
        {
                cout<<data[i];
                cout<<" ";
        }
    }
};
main()
{
    int x;
    int n;
    Vector V;
    do
    {
        cout<<"-----------Vector------------\n";
        cout<<"1. Create a vector\n";
        cout<<"2. Clear element in a vector\n";
        cout<<"3. Test if X is a component in a vector\n";
        cout<<"4. Search the first occurrence of X\n";
        cout<<"5. Search the last occurrence of X\n";
        cout<<"6. What is the component at the specified index\n";
        cout<<"7. Test if a vector has no components\n";
        cout<<"8. Show the Vector\n";
        cout<<"0. Exit\n";
        cout<<"--------------------------------------------\n";
        cin>>n;
        if (n==1)
            Vector V;
        else if(n==2)
            V.Clear();
        else if (n==3)
        {
            cout<<"\nWhat is the component?";
            cin>>x;
            int check = V.contains(x);
            if (check==0)
                cout<<"\n There is no "<<x<<" in this vector\n";
            else
                cout<<"\nThis vector contains "<<x<<"\n";
        }
        else if (n==4)
        {
            cout<<"\nWhat is the element?\n";
            cin>>x;
            int check = V.indexOf(x);
            if(check>=0)
                cout<<x<<" is located at "<<check<<" position in this vector\n";
            else
                cout<<"\nThere is no " <<x<<" in this vector";
        }
        else if (n==5)
        {
            cout<<"\nWhat is the element?";
            cin>>x;
            int check = V.lastIndexOf(x);
             if(check>=0)
                cout<<"\nThe last index of "<<x<<" is "<< check<<"\n";
            else
                cout<<"\nThere is no " <<x<<" in this vector";
        }
        else if (n==6)
        {
            cout<<"\nWhat is index u want to search ";
            cin>>x;
            if (x>V.capacity())
                cout<<"the range of this vector is "<<V.capacity()<<"\n";
            else
                cout<<"\nThe element at "<<x<<" is "<<V.elementAt(x);
        }
        else if (n==7)
        {
            int check=V.isEmpty();
            if (check==0)
                cout<<"\nVector is not empty";
            else
                cout<<"\nVector is empty";
        }
        else if (n==8)
        {
            V.display();
        }
    }while(n!=0);
}

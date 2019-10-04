#include <iostream>
#include <conio.h>
#include <math.h>
#include <array>
#include <bits/stdc++.h>
using namespace std;

main()
{
    int A[] = {5,7,2,4,8};
    for (int i=0; i<A.size()-1; i++)
        for ( int j=i+1; j<A.size(); j++)
            if(A[i]>A[j])
            {
                int t= A[i];
                A[i]=A[j];
                A[j]=t;
            }
    for(int i=0; i<A.size(); i=++)
        cout<<A[i]<<" ";

    int A[] = {5,7,2,4,8};
    sort(A);
    for(int i=0; i<A.size(); i=++)
        cout<<A[i]<<" ";
}

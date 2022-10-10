#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, n1=0, n2=1, n3=0;
    cout<<"Enter no. of steps:";
    cin>>N;
    while(N>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        N--;
    }
    cout<<"\nThe no. ways: "<<n3;
}
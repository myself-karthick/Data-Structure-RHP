#include<iostream>
using namespace std;
int main()
{
    int N, rev=0;
    cin>>N;
    while(N>0)
    {
        rev = rev << 1;
        if(N&1==1)
            rev = rev ^ 1;
        N=N>>1;
    }
    cout<<rev;
}
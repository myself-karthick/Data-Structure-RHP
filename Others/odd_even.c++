#include<iostream>
using namespace std;
int main()
{
    int N, odd=0, even=0;
    cin>>N;
    while(N>0)
    {
        ((N%10)%2)? odd++:even++ ;
        N/=10;
    }
    cout<<"Odd :"<<odd<<"\nEven :"<<even;
}
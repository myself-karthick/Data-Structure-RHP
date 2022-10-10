#include<iostream>
using namespace std;
int main()
{
    int N, count=0;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
        if(i>0 && arr[0]>arr[i])
            count++;
    }

}
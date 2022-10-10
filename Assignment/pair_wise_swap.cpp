#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before swapping"<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter swapping"<<endl;
    for(int i=0; i<N-1; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
}
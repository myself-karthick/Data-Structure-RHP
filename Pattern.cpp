#include <iostream>
using namespace std;
int main()
{
    int N, key, f=0, index=0;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
         cin>>arr[i];
    }
    cout<<"Enter the key :";
    cin>>key;
    cout<<"\n";
    for(int i=0; i<N; i++)
    {
        if(arr[i]==key)
        {
            f=1;
            cout<<"Element is found\n";
            break;
        }
    }
    if(f==0)
        cout<<"Element is not found\n";
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N-1; j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }   
    }
    cout<<"Sorted array\n";
    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Pattern \n";
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<arr[index++]<<" ";
            if(index==N)
                return 0;
        }
        cout<<"\n";
    }
}
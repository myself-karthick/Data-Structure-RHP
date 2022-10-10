#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, avg, sum=0, count=0;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/N;
    sort(arr,arr+N, greater<int>());
    for(int i=0; i<N; i++)
    {
        if(arr[i]>avg)
        {
            for(int j=i+1; j<N; j++)
            {
                while(arr[j]!=avg && arr[i]!=avg)
                {
                    arr[j]++;
                    arr[i]--;
                    count++;
                }
                if(arr[i]==avg)
                    break;
            }
        }
    }
    cout<<"No. of operations: "<<count;
}
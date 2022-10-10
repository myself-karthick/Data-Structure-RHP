#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N], pendulam[N], index=N-1, penLeft=0, penRight=N-1;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+N);
    while(index>=0)
    {
        if(index>=0)
            pendulam[penRight--]=arr[index--];
        if(index>=0)
            pendulam[penLeft++]=arr[index--];
    }
    for(int i=0; i<N; i++)
    {
        cout<<pendulam[i]<<" ";
    }
}
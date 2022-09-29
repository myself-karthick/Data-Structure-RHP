#include <iostream>
using namespace std;
int main()
{
    int N, left=0;
    cin>>N;
    int arr[N], right=N-1;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    while(left<right)
    {
        if(arr[left]%2 && arr[right]%2==0)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]%2 && arr[right]%2)
        {
            right--;
        }
        else if (!arr[left] && !arr[right]%2)
        {
            left++;
        }
        else
        {
            left++;
            right--;
        }
    }
    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
}
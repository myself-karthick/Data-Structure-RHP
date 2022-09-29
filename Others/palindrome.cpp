#include <iostream>
using namespace std;
int ispalindrome(int* arr, int left, int right)
{
    while(left<right)
    {
        if(arr[left++]!=arr[right--])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int N;
    cin>>N;
    int arr[N], left=0, right=N-1;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    while(left<right)
    {
        if(!ispalindrome(arr, left, right))
        {
            if(arr[left]+arr[left+1] <= arr[right]+arr[right-1])
            {
                arr[left+1]=arr[left]+arr[left+1];
                arr[left]=-1;
                left++;
            }
            else if(arr[left] + arr[left + 1] > arr[right] + arr[right - 1])
            {
                arr[right-1] = arr[right] + arr[right- 1];
                arr[right]=-1;
                right--;
            }
        }
        else
        {
            for(int i=left; i<=right; i++)
            {
                cout<<arr[i]<<" ";
            }
            return 0;
        }
    }
    for (int i = left; i <=right; i++)
    {
        cout << arr[i] << " ";
    }
}
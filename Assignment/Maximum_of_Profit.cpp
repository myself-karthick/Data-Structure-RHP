#include <iostream>
using namespace std;
int sum=0, c=0;
void stockBuyAndSell(int arr[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        while ((i < n - 1) && arr[i + 1] <= arr[i])
        {
            i++;
        }
        if (i == n - 1)
        {
            break;
        }
        int minima = i++;
        while ((i < n) && arr[i] >= arr[i - 1])
        {
            i++;
        }
        int maxima = i - 1;
        sum += arr[maxima]-arr[minima];
        cout << "(" << minima << " " << maxima << ") Profit: "<<arr[maxima]-arr[minima]<<endl;
        c++;
    }
    if (c == 0)
    {
        cout << "No Profit";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
            cin >> arr[i];
    }
    stockBuyAndSell(arr, n);
    if(c!=0)
        cout<<"\nTotal Profit: "<<sum;
    return 0;
}
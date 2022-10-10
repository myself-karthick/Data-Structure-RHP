#include <iostream>
using namespace std;
bool subset_sum(int arr[], int N, int sum)
{
    if (sum == 0)
        return true;

    if (N == 0)
        return false;

    if (arr[N - 1] > sum)
        return subset_sum(arr, N - 1, sum);

    return subset_sum(arr, N - 1, sum) || subset_sum(arr, N - 1, sum - arr[N - 1]);
}
int main()
{
    int N, sum;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> sum;
    if (subset_sum(arr, N, sum))
        cout << "yes";
    else
        cout << "no";
}
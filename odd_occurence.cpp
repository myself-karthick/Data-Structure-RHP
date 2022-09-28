#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] != -1)
        {
            int count = 1;
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }
            if (count % 2)
            {
                cout << arr[i] << " ";
            }
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] == arr[j])
                    arr[j] = -1;
            }
        }
    }
}
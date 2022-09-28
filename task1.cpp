#include <iostream>
using namespace std;
int main()
{
    long int N, back = 0;
    int key;
    cin >> N >> key;
    while (N > 0)
    {
        if (N % 10 == key)
        {
            N /= 10;
            break;
        }
        else
            back = back * 10 + N % 10;
        N /= 10;
    }
    while (back > 0)
    {
        N = N * 10 + back % 10;
        back /= 10;
    }
    cout << N;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S1, S2;
    getline(cin, S1);
    getline(cin, S2);
    int sum = 0;
    for (int i = 0; S1[i]; i++)
    {
        for (int j = 0; S2[j]; j++)
        {
            if (S1[i] == S2[j] && S1[i] != '@')
            {
                S1[i] = S2[j] = '@';
                break;
            }
        }
    }
    for (int i = 0; S1[i]; i++)
    {
        if (S1[i] != '@')
            sum += S1[i];
    }
    for (int i = 0; S2[i]; i++)
    {
        if (S2[i] != '@')
            sum += S2[i];
    }
    cout << sum;
}

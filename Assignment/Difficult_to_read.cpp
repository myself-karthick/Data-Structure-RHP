#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int c[26] = {0}, max = 0;
    for (int i = 0; s[i]; i++)
    {
        c[s[i] - 'a']++;
    }
    for (int i = 25; i >= 0; i--)
    {
        if (c[i] > max)
            max = c[i];
        if (c[i] == 0)
        {
            cout << char(i + 'a');
        }
    }
    int k = 1;
    while (k <= max)
    {
        for (int i = 25; i >= 0; i--)
        {
            if (c[i] == k)
            {
                cout << char(i + 'a');
            }
        }
        k++;
    }
}
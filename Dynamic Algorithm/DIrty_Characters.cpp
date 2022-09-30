#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> S1, S2;
    char t;
    int f = 0, count[122] = {0};
    while (cin >> t)
    {
        if (t == '"' && f == 0)
        {
            f = 1;
        }
        else if (t == '"' && f == 1)
        {
            break;
            f = 0;
        }
        else if (t != '"')
        {
            S1.push_back(t);
        }
    }
    f = 0;
    while (cin >> t)
    {
        if (t == '"' && f == 0)
        {
            f = 1;
        }
        else if (t == '"' && f == 1)
        {
            break;
        }
        else if (t != '"')
        {
            S2.push_back(t);
        }
    }
    for (auto i = S2.begin(); i != S2.end(); i++)
    {
        count[*i]++;
    }
    for (auto i = S1.begin(); i <= S1.end(); i++)
    {
        if (count[*i] == 0)
            cout << *i;
    }
    return 0;
}
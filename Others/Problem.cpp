#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char temp[5];
    getline(cin, str);
    map<int, int> years;
    for (int i = 0; i <= str.size() - 4; i++)
    {
        if (isdigit(str[i]) && isdigit(str[i + 1]) && isdigit(str[i + 2]) && isdigit(str[i + 3]))
        {
            temp[0] = str[i];
            temp[1] = str[i + 1];
            temp[2] = str[i + 2];
            temp[3] = str[i + 3];
            int year = atoi(temp);
            years[year]++;
        }
    }
    cout << years.size();
}
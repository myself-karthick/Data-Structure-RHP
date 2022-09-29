#include <iostream>
using namespace std;
int main()
{
    string S1, S2;
    getline(cin, S1);
    getline(cin, S2);
    int len1 = S1.length(), len2 = S2.length();
    for (int i = 0; i <= len1 - len2; i++)
    {
        int start = i, end = i + len2, f = 0;
        if (S1[i] == S2[0])
        {
            for (int j = 0; j < len2; j++)
            {
                if (S1[start++] != S2[j])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                printf("Pattern found at index %d", i);
        }
    }
}
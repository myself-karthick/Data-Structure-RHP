// KMP (Knuth Morris Pratt) Pattern Searching
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void computeLps(string pat, int M, int *lps)
{
    int i = 0, len = 0;
    lps[i++] = len;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i++] = len;
        }
        else
        {
            if (len == 0)
                lps[i++] = len;
            else
                len = lps[len - 1];
        }
    }
}
void KMP(string text, string pat)
{
    int lentext = text.length();
    int lenpat = pat.length();
    int i = 0, j = 0, lps[lenpat];
    computeLps(pat, lenpat, lps);
    while ((lentext - i) >= (lenpat - j))
    {
        if (text[i] == pat[j])
        {
            i++;
            j++;
        }
        if (j == lenpat)
        {
            printf("Found pattern at index %d", i - j);
            j = lps[j - 1];
        }
        else if (i < lentext && text[i] != pat[j])
        {
            if (j == 0)
                i++;
            else
                j = lps[j - 1];
        }
    }
}
int main()
{
    string text, pat;
    getline(cin, text);
    getline(cin, pat);
    KMP(text, pat);
}
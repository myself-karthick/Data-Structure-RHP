// KMP (Knuth Morris Pratt) Pattern Searching
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(char *pat, int M, int *lps)
{
    int i=0, len=0;
    lps[i++]=0;
    while(i<M)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i++]=len;
        }
        else
        {
            if(len==0)
            {
                lps[i++]=len;
            }
            else    
                len=lps[len-1];
        }
    }
    for(int i=0; i<M; i++)
    {
        cout<<lps[i]<<" ";
    }
    cout<<endl;
}

// Prints occurrences of txt[] in pat[]
void KMPSearch(char *pat, char *txt)
{
    int lentext=strlen(txt);
    int lenpat=strlen(pat);
    int i=0, j=0, lps[lenpat];
    computeLPSArray(pat, lenpat, lps);
    while((lentext-i)>= (lenpat-j))
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==lenpat)
        {
            cout<<"Pattern found at "<<i-j<<endl;
            j=lps[j-1];
        }
        else if(i<lentext && txt[i]!=pat[j])
        {
            if(j==0)
                i++;
            else    
                j=lps[j-1];
        }
    }

}

int main()
{
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABCABAB";
    KMPSearch(pat, txt);
    return 0;
}

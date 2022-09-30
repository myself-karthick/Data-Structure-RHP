#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permute (string str, int l ,int r)
{
    if(l==r)
    {
        cout<<str<<endl;
    }
    else
    {
        for(int i=l; i<=r; i++)
        {
            swap(str[l],str[i]);
            permute(str, l+1, r);
            swap(str[l],str[i]); //Backtracking 
        }
    }
}
int main()
{
   string str;
   cin>>str;
   permute(str, 0, str.length()-1);
   cout<<str;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string> per;
void permute (vector<string> str, int l ,int r, int count)
{
    if(l==r)
    {
        for(int i=0; i<count; i++)
        {
            cout<<str[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=l; i<=r; i++)
        {
            swap(str[l],str[i]);
            permute(str, l+1, r, count);
            swap(str[l],str[i]);
        }
    }
}
int main()
{
    int count;
    cin>>count;
    string b="B";
    for (int i = 1; i <= count; i++)
    {
        per.push_back(b + to_string(i));
    }
    permute(per, 0, count-1, count);
}
//muthukumarmurugan@faceacademy.in
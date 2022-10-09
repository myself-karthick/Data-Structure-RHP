#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,m,s;
    cin>>t;
    while(t--)
    {
       cin>>n;
       s=0;
       int a[n],l[n],r[n];
       for(i=0;i<n;i++)
           cin>>a[i];
        l[0]=a[0],r[n-1]=a[n-1];
        for(i=1;i<n;i++)
        {
           m=max(l[i-1],a[i]);
           l[i]=m;
        }
        for(i=n-2;i>=0;i--)
        {
           m=max(r[i+1],a[i]);
           r[i]=m;
        }
        for(i=0;i<n;i++)
        {
            s=s+((min(l[i],r[i]))-a[i]);
        }
        cout<<s<<endl;
    }
}
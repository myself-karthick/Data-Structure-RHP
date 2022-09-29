#include<iostream>
using namespace std;
int main()
{
    string S1, S2;
    cin>>S1>S2;
    int len1=S1.length(), len2=S2.length();
    for(int i=0; i<len1-len2; i++)
    {
        cout<<S1[i];
    }
}
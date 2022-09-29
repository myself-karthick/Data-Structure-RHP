#include<iostream>
using namespace std;
int main()
{
    string S1, S2;
    cin>>S1>>S2;
    int len1=S1.length(), len2=S2.length();
    for(int i=0; i<=len1-len2; i++)
    {
        int start=i, end=i+len2;
        if(S1[i]==S2[0])
        {
            for(int j=0; j<len2; j++)
            {
                cout<<S1[start++]<<" "<<S2[j]<<endl;
            }
        }
    }
}
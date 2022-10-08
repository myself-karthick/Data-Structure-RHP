#include<iostream>
using namespace std;
int main()
{
    string S1, S2;
    cin>>S1>>S2;
    if(S1.length()!=S2.length())
        cout<<"NO";
    else
    {
        for(int i=0; S1[i]; i++)
        {
            for(int j=0; S2[j]; j++)
            {
                if(S1[i]==S2[j])
                {
                    S1[i]=S2[j]='*';
                    break;
                }
            }
        }
        if(S1==S2)
            cout<<"YES";
        else    
            cout<<"NO";
    }
}
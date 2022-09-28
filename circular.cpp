#include<iostream>
using namespace std;
int main()
{
    string S1;
    int index;
    char ch;
    cin>>S1>>index>>ch;
    if(ch=='r' || ch=='R')
    {
        int start=S1.length()-1 - index;
        index=start;
    }
    for(int i=0; S1[i]; i++)
    {
        cout<<S1[index++];
        if(index==S1.length())
            index=0;
    }
}
#include<iostream>
using namespace std;
int main()
{
    string S1, S2;
    cin>>S1>>S2;
    int cz(-1);
    cout<<cz<<endl;
    int c=0;
    int arr1[26]={0}, arr2[26]={0};
    for(int i=0; S1[i]; i++)
    {
        arr1[S1[i]-97]++;
    }
    for(int i=0; S2[i]; i++)
    {
        arr2[S2[i]-97]++;
    }
    for(int i=0; i<26; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            printf("%c\n",i+97);
            c+=abs(arr1[i]-arr2[i]);
        }
    }
    cout<<c;
}
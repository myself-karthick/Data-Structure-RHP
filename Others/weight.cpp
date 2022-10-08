#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int sum=0, t;
    for(int i=0; s[i]; i++)
    {

        t=(tolower(s[i])-96);
        cout<<s[i]<<" "<<(t*(t+1)/2)<<endl;
        
        sum+=t*(t+1)/2;
    }
    cout<<endl<<sum;
}
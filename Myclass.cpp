#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class BaseClass
{
    private:
        int m1, m2, m3;
    public:
        void set(int a, int b, int c)
        {
            m1=a;
            m2=b;
            m3=c;
        }
        double get()
        {
            return (m1+m2+m3)/3;
        }
};
int main()
{
    BaseClass obj[3];
    int a, b,c;
    for(int i=0; i<3; i++)
    {
        cin >> a >> b >> c;
        obj[i].set(a,b,c);
        cout<<fixed<<setprecision(2)<<obj[i].get()<<endl;
    }
}
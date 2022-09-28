#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}
int main()
{
    int a, b;
    cin>>a>>b;
    printf("%d %d\n",a,b);
    swap(a,b);
    printf("%d %d\n", a, b);
}
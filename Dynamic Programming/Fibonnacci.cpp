#include<bits/stdc++.h>
using namespace std;
int fib(int N, vector<int> mem)
{
    if(mem[N]==-1)
        mem[N]=fib(N-1,mem)+fib(N-2,mem);
    if(N<=2)
        return 1;
    return mem[N];
}
int main()
{
    int N;
    cin>>N;
    vector<int> mem(N+1,-1);
    cout<<fib(N,mem);
}
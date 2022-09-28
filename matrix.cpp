#include<iostream>
using namespace std;
int main()
{
    int N, line=0, side=0, left=0, right=0;
    cin>>N;
    int mat[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>mat[i][j];
            if(i==N/2)
                side+=mat[i][j];
            if(j==N/2)
                line+=mat[i][j];
            if(i==j)
                left+=mat[i][j];
            if(j==(N-1-i))
                right+=mat[i][j];
        }
    }
    cout<<line+side<<" ";
    cout<<left-right;
}
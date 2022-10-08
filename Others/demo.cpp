#include <iostream>
using namespace std;
int main()
{
    int N, row=0, col=0, f=1;
    string S;
    cin >> N >> S;
    char mat[N][10];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            mat[i][j]='-';
        }
    }
    for (int i = 0; S[i];)
    {
        if(row<=N && f==1)
        {
            if(row!=N)
                mat[row++][col]=S[i++];
            else
            {
                row--;
                col++;
                f=2;
            }
        }
        else if(row>=0 && f==2)
        {
            mat[row--][col]=S[i++];
            if(row==-1)
            {
                col++;
                f=1;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
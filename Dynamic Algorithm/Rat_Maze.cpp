#include<iostream>
using namespace std;
int mat[100][100], N, found=0;
void check_maze(int row, int col)
{
    if(row>=0 && col>=0 && row<N && col<N && mat[row][col]==1)
    {
        if(row==N-1 && col==N-1 && mat[row][col]==1)
        {
            found=1;
            return ;
        }
        check_maze(row+1, col);
        if(!found)
            check_maze(row, col+1);
        if (!found)
            check_maze(row - 1, col);
        if (!found)
            check_maze(row, col - 1);
    }
    else
        return ;
        
}
int main()
{
    cin>>N;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>mat[i][j];
        }
    }
    check_maze(0,0);
    if(found==1)
        cout<<"yes";
    else    
        cout<<"no";
}
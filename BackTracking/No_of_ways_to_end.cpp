#include <iostream>
using namespace std;
int N, mat[100][100];

void findlast(int row, int col)
{
    if (row >= 0 && row < N && col >= 0 && col < N)
    {
        mat[row][col]++;
        findlast(row + 1, col);
        findlast(row, col + 1);
    }
}
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat[i][j] = 0;
        }
    }
    findlast(0, 0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
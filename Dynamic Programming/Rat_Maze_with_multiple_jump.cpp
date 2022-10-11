#include <bits/stdc++.h>

using namespace std;

#define MAX 11

void display(int sol[MAX][MAX], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }
}

bool isSafe(int maze[MAX][MAX], int x, int y, int N)
{
    return ((x >= 0 && x < N) && (y >= 0 && y < N) && (maze[x][y]));
}

bool solveUtil(int maze[MAX][MAX], int x, int y, int sol[MAX][MAX], int N)
{
    if (x == N - 1 && y == N - 1)
    {
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(maze, x, y, N))
    {
        sol[x][y] = 1;

        for (int i = 1; i <= maze[x][y]; i++)
        {

            if (solveUtil(maze, x, y + i, sol, N))
                return true;
            if (solveUtil(maze, x + i, y, sol, N))
                return true;
        }

        sol[x][y] = 0;
        return false;
    }

    return false;
}

void solve(int maze[MAX][MAX], int N)
{
    int sol[MAX][MAX];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            sol[i][j] = 0;
    }

    if (!solveUtil(maze, 0, 0, sol, N))
        cout << "-1\n";
    else
        display(sol, N);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int maze[MAX][MAX];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cin >> maze[i][j];
        }

        solve(maze, N);
    }

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int left = 0, right = n - 1;
    int top = 0, bottom = n - 1;
    while (left < right && top < bottom)
    {
        for (int i = 0; i < (right - left); i++)
        {
            // use reverse order
            // save top left
            int temp = matrix[top][left + i];

            // move bottom left to top left
            matrix[top][left + i] = matrix[bottom - i][left];
            // move bottom right to bottom left
            matrix[bottom - i][left] = matrix[bottom][right - i];
            // move top right to bottom right
            matrix[bottom][right - i] = matrix[top + i][right];
            // move top left to top right
            matrix[top + i][right] = temp;
        }
        left++;
        right--;
        top++;
        bottom--;
    }
}
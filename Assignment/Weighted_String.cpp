#include <iostream>
#include <vector>
using namespace std;
int values[26];
int findfloor(int, int, int);
void insertValues()
{
    values[0] = 1;
    int prev = 1;
    for (int i = 1; i < 26; i++)
    {
        values[i] = (i + 1) * prev + prev;
        prev = values[i];
        // cout<<prev;
    }
}
void formedString(vector<char> s, int k)
{
    int low = 0;
    int high = 25;
    while (k != 0)
    {
        int ind = findfloor(k, low, high);
        s.push_back((ind + 'A'));
        k = k - values[ind];
        // cout<<k;
    }
    // return sb;
    // cout<<sb;
    for (int i = s.size() - 1; i >= 0; i--)
        cout << s[i];
}
int findfloor(int k, int low, int high)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (values[mid] <= k)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    // cout<<ans;
    return ans;
}
int main()
{
    insertValues();
    int n;
    cin >> n;
    vector<char> s;
    formedString(s, n);
}
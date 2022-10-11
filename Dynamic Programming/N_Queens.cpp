#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<pair<int, int>> qpos;
    vector<vector<int>> ans;
    bool check(int x, int y)
    {
        int i;
        for (i = 0; i < qpos.size(); i++)
        {
            if (x == qpos[i].first || y == qpos[i].second)
            {
                return false;
            }
            if (x + y == qpos[i].first + qpos[i].second)
            {
                return false;
            }
            if (x - y == qpos[i].first - qpos[i].second)
            {
                return false;
            }
        }
        return true;
    }

    void recur(int n, int i)
    {
        if (qpos.size() == n)
        {
            vector<int> vec;
            for (auto x : qpos)
            {
                vec.push_back(x.second + 1);
            }
            ans.push_back(vec);
            return;
        }
        if (i == n)
            return;
        for (int j = 0; j < n; j++)
        {
            int ch = check(i, j);
            if (ch)
            {

                qpos.push_back({i, j});
                recur(n, i + 1);
                qpos.pop_back();
            }
        }
    }

    vector<vector<int>> nQueen(int n)
    {
        recur(n, 0);
        vector<int> vec;
        for (auto x : ans)
        {
            for (auto y : x)
            {
                vec.push_back(n - y + 1);
            }
        }
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution ob;
    vector<vector<int>> ans = ob.nQueen(n);
    if (ans.size() == 0)
        cout << -1 << "\n";
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "[";
            for (int u : ans[i])
                cout << u << " ";
            cout << "] ";
        }
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int josephus(vector<int> vec, int k, int ind)
{
    if (vec.size() == 1)
    {
        return vec[0];
    }
    ind = (ind + k) % vec.size();
    vec.erase(vec.begin() + ind);
    return josephus(vec, k, ind);
}
int main()
{
    int n, k;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the number to skip people: ";
    cin >> k;
    k--;
    vector<int> vec;
    int ind = 0;
    for (int i = 1; i <= n; i++)
    {
        vec.push_back(i);
    }
    cout << "The person at the position " << josephus(vec, k, ind) << " survives";
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<list<int>> adj;
void addEdge(int V, int U)
{
    adj[V].push_back(U);
}
void BFS(int V, int root)
{
    vector<bool> visited;
    visited.resize(V,false);
    list<int> queue;
    visited[root]=true;
    queue.push_back(root);
    while(!queue.empty())
    {
        root= queue.front();
        cout<<root<<" ";
        queue.pop_front();
        for(auto i:adj[root])
        {
            if(visited[i]==false)
            {
                queue.push_back(i);
                visited[i]=true;
            }
        }
    }
}
int main()
{
    int N, V, E, v, root;
    cin>>N;
    cin>>v;
    adj.resize(v);
    for(int i=1; i<=N; i++)
    {
        cin>>V>>E;
        addEdge(V,E);
    }
    cin>>root;
    BFS(v, root);
}
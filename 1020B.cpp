#include <bits/stdc++.h>
using namespace std;
bool done;
int vis[10000];
vector<int> adj[10000];

void dfs(int s)
{
    if (done)
        return;
    vis[s] = 1;
    for (int e : adj[s])
    {
        if (!vis[e])
            dfs(e);
        else
        {
            cout << e <<" ";
            done = true;
            return;
        }
    }
}

int main()
{
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        adj[i].push_back(m);
    }
    for (int i = 1; i <= n; i++)
    {
        done = false;
        memset(vis, 0, sizeof(vis));
        dfs(i);
    }
}
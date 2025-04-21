#include <bits/stdc++.h>
using namespace std;

int visited[1001];
vector<int> adj[1001];

void DFS(int u)
{
    visited[u] = 1;
    cout << u << " ";
    for (int v : adj[u])
    {
        if (visited[v] == 0)
            DFS(v);
    }
    return;
}

void BFS(int here)
{
    queue<int> q;
    visited[here] = 1;
    q.push(here);
    while (q.size())
    {
        int here = q.front();
        cout << here << " ";
        q.pop();
        for (int there : adj[here])
        {
            if (visited[there]) continue;
            visited[there] = visited[here] + 1;
            q.push(there);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, m, v;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    DFS(v);
    cout << '\n';
    memset(visited, 0, sizeof(visited));
    BFS(v);
    cout << '\n';
    
 
    return 0;
}
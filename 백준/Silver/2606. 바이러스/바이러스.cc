#include <bits/stdc++.h>
using namespace std;

int visited[101];
vector<int> computers[101];
int answer = 0;

void BFS(int start)
{
    queue<int> q;
    visited[start] = 1;
    q.push(start);

    while (!q.empty())
    {
        int here = q.front();
        q.pop();

        if (here != start) {
            answer++;
        }

        for (int there : computers[here])
        {
            if (visited[there]) continue;
            visited[there] = 1;
            q.push(there);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n;
    cin >> n;
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        computers[a].push_back(b);
        computers[b].push_back(a);
    }
    
    BFS(1);
    cout << answer;
 
    return 0;
}
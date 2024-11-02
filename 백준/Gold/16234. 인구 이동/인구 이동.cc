#include <bits/stdc++.h>
using namespace std;

int n, l, r;
int population[51][51];
bool visited[51][51];
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };
int answer = 0;
vector<pair<int, int>> savePos;
int sum = 0;

void dfs(int y, int x)
{
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if (!visited[ny][nx])
        {
            if (abs(population[y][x] - population[ny][nx]) >= l && abs(population[y][x] - population[ny][nx]) <= r)
            {
                sum += population[ny][nx];
                savePos.push_back({ ny,nx });
                visited[ny][nx] = true;
                dfs(ny, nx);
            }
            else
                continue;
        }
    }
    return;
}

int main() 
{
    cin >> n >> l >> r;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> population[i][j];
        }
    }
    
    while (true)
    {
        int temp = 0;
        memset(visited, false, sizeof(visited));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!visited[i][j])
                {
                    sum = population[i][j];
                    savePos.clear();
                    visited[i][j] = true;
                    savePos.push_back({ i,j });
                    dfs(i, j);
                    if (savePos.size() == 1) continue;
                    for (auto p : savePos)
                    {
                        population[p.first][p.second] = sum / savePos.size();
                        temp = 1;
                    }
                    
                }
            }
        }

        if (temp == 0)
            break;
        answer++;
    }
    
    cout << answer;

    return 0;
}
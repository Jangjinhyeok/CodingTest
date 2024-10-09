#include <iostream>
#include <algorithm>
using namespace std;
int n;
int m[101][101];
bool visited[101][101];
int dy[4] = { -1, 0 ,1, 0 }; // 위 오 아래 왼
int dx[4] = { 0, 1, 0, -1 };
int answer = 1;
void DFS(int y, int x, int height)
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= n || nx < 0 || ny >= n || ny < 0) continue;
        if (m[ny][nx] > height && !visited[ny][nx])
            DFS(ny, nx, height);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    }

    for (int k = 1; k < 101; k++)
    {
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        int areaCnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (m[i][j] > k && !visited[i][j])
                {
                    DFS(i, j, k);
                    areaCnt++;
                }
            }
        }
        answer = max(answer,areaCnt);
    }

    cout << answer;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int t, m, n, k;
int x, y;
int answer = 0;
vector<int> cnt;
int cabbage[51][51];
int dy[4] = { -1, 0 ,1, 0 }; // 위 오 아래 왼
int dx[4] = { 0, 1, 0, -1 };
bool visited[51][51];

void DFS(int y, int x)
{
    visited[y][x] = 1;
    int nx, ny;
    for (int i = 0; i < 4; i++) 
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= m) 
            continue;
        if (cabbage[ny][nx] == 1 && !visited[ny][nx])
            DFS(ny, nx);
    }
    return;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> n >> k;
        fill(&cabbage[0][0], &cabbage[0][0] + 51 * 51, 0);
        fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
        for (int j = 0; j < k; j++)
        {
            cin >> x >> y;
            cabbage[y][x] = 1;
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (cabbage[j][k] == 1 && visited[j][k] == false)
                {
                    answer++;
                    DFS(j, k);
                }
            }
        }
        cnt.push_back(answer);
        answer = 0;
    }
    
    for(int i : cnt)
        cout << i << "\n";

    return 0;
}
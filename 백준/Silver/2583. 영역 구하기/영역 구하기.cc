#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int m, n, k;
int areaCnt = 0;
vector<int> area;
int temp;
int paper[101][101];
bool visited[101][101];
int dy[4] = {-1, 0, 1, 0}; // 위 오 아래 왼
int dx[4] = {0, 1, 0, -1};
void dfs(int y, int x)
{
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (nx >= n || ny >= m || nx < 0 || ny < 0)
            continue;
        if (!visited[ny][nx] && paper[ny][nx] == 0)
        {
            temp++;
            dfs(ny, nx);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int x, y, x2, y2;
        cin >> x >> y >> x2 >> y2;
        for (int i = y; i < y2; i++)
        {
            for (int j = x; j < x2; j++)
                paper[i][j] = 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (paper[i][j] == 0 && !visited[i][j])
            {
                areaCnt++;
                temp = 1;
                dfs(i, j);
                area.push_back(temp);
            }
        }
    }

    sort(area.begin(), area.end());

    cout << areaCnt << "\n";
    for (int i : area)
        cout << i << " ";
    
    return 0;
}
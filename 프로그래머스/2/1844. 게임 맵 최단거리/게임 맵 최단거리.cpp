#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int bfs (vector<vector<int>>& maps);
int solution(vector<vector<int> > maps)
{
    int answer = 0;
    answer = bfs(maps);
    return answer;
}

int bfs (vector<vector<int>>& maps)
{
    int n = maps.size();       // 맵의 세로 크기
    int m = maps[0].size();    // 맵의 가로 크기

    // 방문 체크를 위한 2차원 배열
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    queue<pair<int, int>> pos;
    pos.push({0, 0});
    visited[0][0] = true;  // 시작점 방문 처리
    
    // 동, 서, 남, 북 방향 벡터
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    int answer = 1; // 시작점도 카운트에 포함

    while (!pos.empty())
    {
        int size = pos.size();

        // BFS의 현재 단계에서 탐색
        for (int i = 0; i < size; i++) {
            pair<int, int> temp = pos.front();
            pos.pop();

            int row = temp.first;
            int col = temp.second;

            // 목적지 도착
            if (row == n - 1 && col == m - 1) {
                return answer;
            }

            // 동, 서, 남, 북 네 방향으로 탐색
            for (int dir = 0; dir < 4; dir++) {
                int newRow = row + dx[dir];
                int newCol = col + dy[dir];

                // 맵 경계 안에 있고, 길이 있으며, 방문하지 않은 곳
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m 
                    && maps[newRow][newCol] == 1 
                    && !visited[newRow][newCol]) 
                {
                    pos.push({newRow, newCol});
                    visited[newRow][newCol] = true;  // 방문 처리
                }
            }
        }

        answer++; // 한 단계 진행할 때마다 거리 증가
    }

    return -1;  // 목적지에 도달하지 못한 경우
}
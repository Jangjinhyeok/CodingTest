#include <bits/stdc++.h>
using namespace std;

const int north = 0;
const int east = 1;
const int south = 2;
const int west = 3;

int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1. 현재 칸이 아직 청소되지 않은 경우 현재 칸 청소
    // 2. 현재 칸이 주변 4칸 중 청소되지 않은 빈 칸이 없는경우,
    // 2-1. 바라보는 방향 유지, 한 칸 후진 가능 하다면 한 칸 후진 후 1번으로 back.
    // 2-2. 바라보는 방향의 뒤쪽 칸이 벽이라 후진이 불가능 하다면 작동 멈춤
    // 2-3. 현재 칸의 주변 4칸 중 청소되지 않은 빈 칸이 있는 경우,
    // 2-3-1. 반시계 방향으로 90도 회전.
    // 2-3-2. 바라보는 방향 기준 앞 쪽 칸이 청소 되지 않은 빈 칸인 경우 한 칸 전진
    // 2-3-3. 1번으로 back.

    // 0 = 북쪽
    // 1 = 동쪽 
    // 2 = 남쪽 
    // 3 = 서쪽

    int n, m;
    cin >> n >> m;

    int r, c, d;
    cin >> r >> c >> d;

    int room[51][51];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> room[i][j];
        }
    }

    int answer = 0;

    while (true)
    {
        if (room[r][c] == 0)
        {
            room[r][c] = 2;
            answer++;
        }

        bool moved = false;

        for (int i = 0; i < 4; i++)
        {
            // 반시계 90도 회전
            d = (d + 3) % 4;

            int nr = r + dr[d];
            int nc = c + dc[d];

            if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                continue;

            // 앞 칸이 아직 청소 안 됐으면 전진.
            if (room[nr][nc] == 0)
            {
                r = nr;
                c = nc;
                moved = true;
                break;
            }
        }

        if (moved)
            continue;

        int backDir = (d + 2) % 4;
        int br = r + dr[backDir];
        int bc = c + dc[backDir];

        if (room[br][bc] == 1)
            break;

        r = br;
        c = bc;
    }

    cout << answer << '\n';
    return 0;
}
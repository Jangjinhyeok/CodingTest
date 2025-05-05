#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            q.push({temp, j});
            pq.push(temp);
        }

        int printCnt = 0;

        while (!q.empty())
        {
            int currentP = q.front().first;
            int currentIdx = q.front().second;
            q.pop();

            if (currentP == pq.top())
            {
                printCnt++;
                pq.pop();

                if (currentIdx == m)
                {
                    cout << printCnt << "\n";
                    break;
                }
            }
            else
            {
                q.push({ currentP, currentIdx });
            }

        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;

    vector<pair<int, int>> people(n);

    // 몸무게와 키 입력받기
    for (int i = 0; i < n; i++)
    {
        cin >> people[i].first >> people[i].second;
    }

    vector<int> ranking(n, 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;

            if (people[j].first > people[i].first && people[j].second > people[i].second)
            {
                ranking[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ranking[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    
    return 0;
}
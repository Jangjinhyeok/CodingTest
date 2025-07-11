#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    long answer = 0;
    cin >> n >> m;

    vector<long> sum(n, 0);
    vector<long> combine(m, 0);
    cin >> sum[0];
    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum[i] = sum[i - 1] + temp;
    }

    for (int i = 0; i < n; i++)
    {
        int remain = sum[i] % m;
        if (remain == 0)
            answer++;
        combine[remain]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (combine[i] > 1)
        {
            answer = answer + (combine[i] * (combine[i] - 1) / 2);
        }

    }
    cout << answer << '\n';
    return 0;
}
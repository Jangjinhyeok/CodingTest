#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int answer = 0;
    vector<int> Pennys(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Pennys[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (k >= Pennys[i])
        {
            answer += k / Pennys[i];
            k %= Pennys[i];
        }
    }
    cout << answer;
    return 0;
}
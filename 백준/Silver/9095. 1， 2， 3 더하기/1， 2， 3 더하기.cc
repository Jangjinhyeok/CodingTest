#include <bits/stdc++.h>
using namespace std;
map<int, int> saveData;

int go(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    if (saveData.find(n) != saveData.end())
        return saveData[n];

    int cnt = 0;
    for (int i = 1; i <= 3; i++)
    {
        cnt += go(n - i);
    }

    saveData[n] = cnt;
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << go(n) << '\n';
    }
 
    return 0;
}
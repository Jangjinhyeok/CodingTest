#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    int layer = 1;
    int maxNum = 1 + (6 * ((layer - 1)*layer / 2));

    while (n > maxNum)
    {
        layer++;
        maxNum = 1 + (6 * ((layer - 1) * layer / 2));
    }

    cout << layer;
    return 0;
}
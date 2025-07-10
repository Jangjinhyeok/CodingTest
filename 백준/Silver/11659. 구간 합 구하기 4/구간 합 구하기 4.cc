#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[100001];
    int prefixSum[100001];
    fill(arr, arr + 100000, 0);
    fill(prefixSum, prefixSum + 100000, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        cout << prefixSum[b] - prefixSum[a - 1] << '\n';
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if (m <= n * 100)
    {
        cout << "Yes";
    }
    else
        cout << "No";
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int c0[41] = {0};
    int c1[41] = {0};
    c0[0] = 1; c1[0] = 0;  
    c0[1] = 0; c1[1] = 1;  
    for (int i = 2; i <= 40; i++)
    {
        c0[i] = c0[i - 1] + c0[i - 2];
        c1[i] = c1[i - 1] + c1[i - 2];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << c0[n] << ' ' << c1[n] << '\n';
    }
    return 0;
}
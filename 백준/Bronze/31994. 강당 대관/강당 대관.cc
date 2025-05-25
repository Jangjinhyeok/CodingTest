#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    int big = 0;
    for (int i = 0; i < 7; i++)
    {
        string s;
        int n;
        cin >> s >> n;
        m[n] = s;
        big = max(big, n);
    }
    cout << m[big];
    return 0;
}
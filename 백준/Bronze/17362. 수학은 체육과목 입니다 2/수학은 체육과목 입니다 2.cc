#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    n = (n - 1) % 8 + 1; 
    if (n > 5) 
    {
        n = 10 - n;
    }
    cout << n;
    return 0;
}
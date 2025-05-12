#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    const int r = 31;
    const int M = 1234567891;

    long long hash = 0;
    long long r_pow = 1;  // r^0 부터 시작

    for (int i = 0; i < n; i++) 
    {
        int val = s[i] - 'a' + 1;
        hash = (hash + (val * r_pow) % M) % M;
        r_pow = (r_pow * r) % M;
    }

    cout << hash << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string n;
    cin >> n;
    int num = 20000303;
    int remainder = 0;
    for (char c : n)
    {
        int temp = c - '0';
        remainder = (remainder * 10 + temp) % num;
    }

    cout << remainder;
 
    return 0;
}
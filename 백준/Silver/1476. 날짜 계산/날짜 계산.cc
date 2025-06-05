#include <bits/stdc++.h>
using namespace std;
int main()
{
    int E, S, M;
    cin >> E >> S >> M;
    // 1 <= e <= 15
    // 1 <= s <= 28
    // 1 <= m <= 19

    int e, s, m;
    e = 1;
    s = 1;
    m = 1;

    int answer = 1;
    while (e != E || s != S || m != M)
    {
        if (e >= 15)
        {
            e = 1;
        }
        else
        {
            e++;
        }

        if (s >= 28)
        {
            s = 1;
        }
        else
        {
            s++;
        }

        if (m >= 19)
        {
            m = 1;
        }
        else
        {
            m++;
        }

        answer++;
    }

    cout << answer;
    return 0;
}
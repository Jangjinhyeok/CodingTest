#include <bits/stdc++.h>
using namespace std;
bool isNaturalNumber(double num) 
{
    return num > 0 && num == floor(num);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int h, w, n;
        cin >> h >> w >> n;

        int answer = 1;
        while (n > h)
        {
            n -= h;
            answer++;
        }

        answer += (n * 100);
        cout << answer;
        if (i != t - 1)
            cout << "\n";
    }
    return 0;
}
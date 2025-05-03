#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            cnt++;
            answer += cnt;
        }
        else
        {
            cnt = 0;
        }
    }

    cout << answer;
    return 0;
}
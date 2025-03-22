#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;

    int cnt = 0;
    while (n != 0)
    {
        if (n % 5 == 0)
         {
             cnt = n / 5;
             break;
         }
        if (n / 3 != 0)
        {
            cnt++;
            n -= 3;
            if (n % 5 == 0 && n != 0)
            {
                cnt += (n / 5);
                n /= 5;
                break;
            }
            continue;
        }

        if (n / 5 != 0)
        {
            cnt++;
            n -= 5;
            continue;

        }

        if (n != 0)
        {
            cnt = -1;
            break;
        }
    }
    cout << cnt;
    
    return 0;
}
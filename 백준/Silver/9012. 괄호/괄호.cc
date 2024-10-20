#include <bits/stdc++.h>
using namespace std;

int t;
string ps;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> ps;
        stack<char> check;
        for (char c : ps)
        {
            if (c == '(')
                check.push(c);
            else
            {
                if (!check.empty())
                    check.pop();
                else
                {
                    check.push(')');
                    break;
                }
            }
        }

        if (check.empty())
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }
    
	return 0;
}
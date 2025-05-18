#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << "Case #" << i + 1 << ": ";
        if(n >= 4501)
        {
            cout << "Round 1\n";
        }
        else if(n >= 1001)
        {
            cout << "Round 2\n";
        }
        else if(n >= 26)
        {
            cout << "Round 3\n";
        }
        else
        {
            cout << "World Finals\n";
        }
    }
    return 0;
}
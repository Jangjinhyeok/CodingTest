#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(s.size() == 1)
        {
            cout << s[0] << s[0] << endl;
        }
        else
        {
            cout << s[0] << s[s.size()-1] << endl;
        }
    }
    return 0;
}
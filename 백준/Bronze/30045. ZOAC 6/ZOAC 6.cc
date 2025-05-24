#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int answer = 0;
    string s1 = "01";
    string s2 = "OI";
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (s.find(s1) != string::npos || s.find(s2) != string::npos)
        {
            answer++;
        }
    }
    
    cout << answer;
    return 0;
}
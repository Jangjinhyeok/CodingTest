#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        string temp;
        vector<string> answer;
        for(auto c : s)
        {
            if(c > 64 && c < 91)
            {
                temp.push_back(c + 32);
            }
            else
            {
                temp.push_back(c);
            }
        }
        cout << temp << '\n';        
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin >> n;
int answer = 0;


for (int i = 0; i < n; i++)
{
    string s;
    cin >> s;

    vector<char> c;
    vector<char> checker;
    char lastChar;
    for (int j = 0; j < s.size(); j++)
    {
        if (s.size() == 1)
        {
            answer++;
            break;
        }

        if (j == 0)
        {
            c.push_back(s[j]);
            checker.push_back(s[j]);
            lastChar = s[j];
            continue;
        }

        if (find(checker.begin(), checker.end(), s[j]) == checker.end())
        {
            c.push_back(s[j]);
            checker.push_back(s[j]);
            lastChar = s[j];
        }
        else if (find(checker.begin(), checker.end(), s[j]) != checker.end())
        {
            if (lastChar == s[j])
            {
                c.push_back(s[j]);
            }
            else
            {
                break;
            }
        }


        if (j == s.size() - 1)
        {
            answer++;
        }
    }
}

cout << answer << endl;
return 0;
}
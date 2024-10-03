#include <iostream>
#include <map>
#include <string>
#include <stack>

using namespace std;

string name, newName;
map<char, int> m;
int oddCnt = 0;
stack<char> s;

int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> name;

    for (char c : name)
    {
        if (m.find(c) == m.end())
            m[c] = 1;
        else
            m[c]++;
    }


    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        if (iter->second % 2 == 0)
        {
            int temp = iter->second;
            for (int i = 0; i < temp; i++)
            {
                if (i < temp / 2)
                {
                    newName.push_back(iter->first);
                    iter->second--;
                }
                else
                {
                    s.push(iter->first);
                    iter->second--;
                }
            }
        }
        else
        {
            oddCnt++;
            if (iter->second > 1)
            {
                int temp = iter->second - 1;
                for (int i = 0; i < temp; i++)
                {
                    if (i < temp / 2)
                    {
                        newName.push_back(iter->first);
                        iter->second--;
                    }
                    else
                    {
                        s.push(iter->first);
                        iter->second--;
                    }
                }
            }
            continue;
        }
    }

    if (oddCnt > 1)
        cout << "I'm Sorry Hansoo\n";
        
    else
    {
        for (auto iter = m.begin(); iter != m.end(); iter++)
        {
            if (iter->second != 0)
            {
                newName.push_back(iter->first);
                break;
            }
        }

        while (!s.empty())
        {
            newName.push_back(s.top());
            s.pop();
        }

        cout << newName << "\n";
    }

    return 0;
}
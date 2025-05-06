#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    stack<int> s;
    string result;
    int current = 1;
    int targetIdx = 0;
    while (targetIdx < n)
    {
        int targetNum = v[targetIdx];

        while (current <= targetNum)
        {
            s.push(current);
            result += '+';
            current++;
        }

        if (!s.empty() && s.top() == targetNum)
        {
            s.pop();
            result += '-';
            targetIdx++;
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }

    for (const char op : result)
    {
        cout << op << '\n';
    }

    return 0;
}
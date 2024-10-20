#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    stack<char> check;

    for(char c : s)
    {
        if (c == '.' && check.empty())
            return true;

        if (c == '(' || c == '[')
            check.push(c);
        else if (c == ')')
        {
            if (check.empty() || check.top() != '(')
                return false;
            check.pop();
        }
        else if (c == ']')
        {
            if (check.empty() || check.top() != '[')
                return false;
            check.pop();
        }
    }

    return check.empty();
}

int main()
{
    string str;
    vector<string> answer;
    while (true)
    {
        getline(cin, str);
        if(str == ".")
            break;
        
        if (check(str))
            cout << "yes\n";
        else
            cout << "no\n";
        
    }
    
	return 0;
}
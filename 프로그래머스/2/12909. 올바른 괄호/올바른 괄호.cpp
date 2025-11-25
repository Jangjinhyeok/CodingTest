#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    stack<char> container;
    
    for(char c : s)
    {
        if(c == '(')
        {
            container.push(c);
        }
        else if(c == ')')
        {
            if(container.empty())
            {
                return false;
            }
            else
            {
                container.pop();
            }
        }
    }
    
    if(!container.empty())
        return false;
    
    return true;
}
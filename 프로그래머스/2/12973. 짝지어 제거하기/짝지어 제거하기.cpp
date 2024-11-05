#include <bits/stdc++.h>
using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> stk;
    for(char c:s)
    {      
        if(stk.size()>0 && stk.top() == c)
        {
            stk.pop();
        }
        else
        {
            stk.push(c);
        }
    }
    if(stk.empty())
        answer = 1;
    else
        answer = 0;
	return answer;
}
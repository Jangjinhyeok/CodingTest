#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    stack<char> open;
    stack<char> close;
    for(auto c : s)
    {
        if(c == '(')
            open.push(c);
        else if(c == ')')
        {
            if(open.empty())
                close.push(c);
            else
                open.pop();
        }
    }
    
    if(open.empty() && close.empty())
        answer = true;
    
    if(answer)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return answer;
}
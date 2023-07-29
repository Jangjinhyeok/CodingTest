#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    string temp;
    for(auto c : s)
        temp.push_back(tolower(c));
    
    int p = 0;
    int y = 0;
    
    for(auto c : temp)
    {
        if(c == 'p')
            p++;
        else if(c == 'y')
            y++;
    }
    
    if(p == y)
        answer = true;
    else
        answer = false;

    return answer;
}
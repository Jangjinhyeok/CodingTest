#include <bits/stdc++.h>

using namespace std;

int solution(string dartResult) 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int num = 0;
    int answer = 0;
    int curGetPoint = 0;
    int prevGetPoint = 0;
    char prevChar = ' ';
    bool getStar = false;
    bool getMinus = false;
    
    for (char c : dartResult)
    {
        if (isdigit(c))
        {
            if(c == '1')
            {
                prevChar = c;
            }
            if(prevChar == '1' && c == '0')
            {
                num = 10;
                prevChar = ' ';
                continue;
            }
            num = c - '0';
            continue;
        }

        if (isalpha(c))
        {
            prevChar = ' ';
            if (c == 'S')
            {
                prevGetPoint = curGetPoint;
                curGetPoint = num;
                
                answer += curGetPoint;
            }
            else if (c == 'D')
            {
                num = num * num;
                prevGetPoint = curGetPoint;
                curGetPoint = num;
                
                answer += curGetPoint;
            }
            else
            {
                num = num * num * num;
                prevGetPoint = curGetPoint;
                curGetPoint = num;
                
                answer += curGetPoint;
            }

            continue;
        }

        if(c == '*')
        {
            answer -= curGetPoint;
            answer -= prevGetPoint;
            
            prevGetPoint *= 2;
            curGetPoint *= 2;
            
            answer = answer + prevGetPoint + curGetPoint;
            
        }
        else
        {
            answer -= curGetPoint;
            
            curGetPoint *= -1;
            
            answer += curGetPoint;
            
        }
    }
    return answer;
}
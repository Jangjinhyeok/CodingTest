#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    for(int i = -100; i <= 100; i++)
    {
        if(lines[0][0] < i && lines[0][1] >= i)
        {
            if(lines[1][0] < i && lines[1][1] >= i)
            {
                answer++;
                continue;
            }
            else if(lines[2][0] < i && lines[2][1] >= i)
            {
                answer++;
                continue;
            }
        }
        if(lines[1][0] < i && lines[1][1] >= i)
        {
            if(lines[0][0] < i && lines[0][1] >= i)
            {
                answer++;
                continue;
            }
            else if(lines[2][0] < i && lines[2][1] >= i)
            {
                answer++;
                continue;
            }
        }
        if(lines[2][0] < i && lines[2][1] >= i)
        {
            if(lines[0][0] < i && lines[0][1] >= i)
            {
                answer++;
                continue;
            }
            else if(lines[1][0] < i && lines[1][1] >= i)
            {
                answer++;
                continue;
            }
        }
    }
        
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long temp = num;
    while(answer < 500)
    {
        if(temp == 1)
            break;
        else if(temp % 2 == 0)
        {
            temp = temp / 2;
            answer++;
        }
        else
        {
            temp = (temp * 3) + 1;
            answer++;
        }
    }
    
    if(temp > 1)
        answer = -1;
    
    return answer;
}
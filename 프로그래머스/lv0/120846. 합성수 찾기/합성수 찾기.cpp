#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp = 0;
    if(n < 4)
        return answer;
    for(int i = 4; i <= n; i++)
    {
        for(int j=1; j <= i; j++)
        {
            if(i%j == 0)
                temp++;
            if(temp >= 3)
            {
                temp = 0;
                answer++;
                break;
            }
        }
    }
    return answer;
}
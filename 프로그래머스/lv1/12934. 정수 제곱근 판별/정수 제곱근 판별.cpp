#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    
    long i = 1;
    while(i < 100000000)
    {
        if(i * i == n)
        {
            answer = (i+1) * (i+1);
            break;
        }
        else
            i++;
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n < 7)
        answer++;
    else
    {
        answer =  n/7;   
        if(n%7 != 0)
            answer++;
    }
           
    return answer;
}
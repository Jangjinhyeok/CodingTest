#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int n){
    int facto = 1;
    for(int i = 1; i <= n; i++)
        facto = facto * i;
    return facto;
}

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= 10; i++)
    {
        if(factorial(i) > n)
        {
            answer = i-1;
            break;
        }
        else if(factorial(i) == n)
        {
            answer = i;
            break;
        }
    }
    return answer;
}
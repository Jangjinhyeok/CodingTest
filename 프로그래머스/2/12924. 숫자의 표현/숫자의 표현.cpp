#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 1;
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            if(sum == n)
            {
                answer++;
                sum = 0;
                break;
            }
            else if(sum < n)
                sum += j;
            else
            {
                sum = 0;
                break;
            }
        }
    }
    
    return answer;
}
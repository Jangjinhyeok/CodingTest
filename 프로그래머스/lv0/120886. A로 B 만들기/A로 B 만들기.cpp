#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
    int answer = 1;
    
    sort(before.begin(),before.end());
    sort(after.begin(),after.end());
    
    for(int i = 0; i < before.size(); i++)
    {
        if(before[i] != after[i])
            answer = 0;
    }    
    return answer;
}
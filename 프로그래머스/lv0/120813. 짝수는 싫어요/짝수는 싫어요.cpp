#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(1);
    for(int i = 2; i <= n; i++)
    {
        if(i%2 == 0) continue;
        else answer.push_back(i);
    }
                
    return answer;
}
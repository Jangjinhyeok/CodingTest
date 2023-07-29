#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(auto i : arr)
    {
        if(i % divisor == 0)
            answer.emplace_back(i);
    }
    if(answer.empty())
        answer.emplace_back(-1);
    else
        sort(answer.begin(),answer.end());
    return answer;
}
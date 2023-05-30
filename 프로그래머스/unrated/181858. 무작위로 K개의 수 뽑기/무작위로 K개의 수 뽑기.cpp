#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for(auto i : arr)
    {
        if(answer.empty())
            answer.emplace_back(i);
        else
        {
            if(find(answer.begin(),answer.end(),i) == answer.end())
            {
                if(answer.size() < k)
                    answer.emplace_back(i);
            }
        }
    }
    
    for(int i = 0; i < k; i++)
    {
        if(i >= answer.size())
            answer.emplace_back(-1);
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int cnt = 0;
    for(auto i : arr)
        if(i == 2)
            cnt++;
    
    if(cnt == 0)
    {
        answer.emplace_back(-1);
        return answer;
    }
    else if(cnt == 1)
    {
        answer.emplace_back(2);
        return answer;
    }
    else
    {
        auto s = find(arr.begin(),arr.end(),2);
        for(auto i = s; i != arr.end();i++)
        {
            if(answer.empty())
                answer.emplace_back(*i);
            else
            {
                answer.emplace_back(*i);
                if(*i == 2 && find(i+1,arr.end(),2) == arr.end())
                    break;
            }
            
        }
    }
    return answer;
}
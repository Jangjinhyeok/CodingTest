#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    for(int i = 0; i < score.size();i++)
        answer.emplace_back(score.size());
    vector<int> avg;
    for(auto s : score)
        avg.emplace_back((s[0] + s[1]) / 1);
    
    for(int i = 0; i < avg.size(); i++)
    {
        for(int j = 0; j < avg.size(); j++)
        {
            if(i == j)
                continue;
            else
            {
                if(avg[i] >= avg[j])
                    answer[i]--;
            }
        }
    }
    return answer;
}
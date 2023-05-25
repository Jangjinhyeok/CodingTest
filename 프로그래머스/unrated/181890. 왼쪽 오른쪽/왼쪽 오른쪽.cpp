#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    
    for(int idx = 0; idx < str_list.size(); idx++)
    {
        if(str_list[idx][0] == 'l')
        {
            for(int i = 0; i < idx; i++)
            {
                answer.emplace_back(str_list[i]);
            }
            break;
        }
        
        else if(str_list[idx][0] == 'r')
        {
            for(int i = idx+1; i < str_list.size(); i++)
            {
                answer.emplace_back(str_list[i]);
            }
            break;
        }
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    int limit = 0;
    for(auto i : names)
    {
        if(limit == 0)
        {
            answer.push_back(i);
            limit++;           
        }
        else
            limit++;
        
        if(limit == 5)
            limit = 0;
    }
    return answer;
}
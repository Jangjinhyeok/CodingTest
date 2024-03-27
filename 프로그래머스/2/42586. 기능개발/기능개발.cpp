#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    for(auto i : progresses)
        q.push(i);
    
    
    int count = 0;
    int total_end = 0;
    while(!q.empty())
    {
        while(progresses[total_end] < 100)
        {
            if(count > 0)
            {
                answer.emplace_back(count);
                count = 0;
            }
            
            for(int i = 0 + total_end; i < speeds.size(); i++)
                progresses[i] += speeds[i];
        }
        q.pop();
        count++;
        total_end++;
    }
    
    if(count > 0)
        answer.emplace_back(count);
    
    return answer;
}
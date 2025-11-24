#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    vector<int> answer;
    queue<int> q;
    int completeTask = 0;
    
    for(int i : progresses)
    {
        q.push(i);
    }
    
    while(!q.empty())
    {
        int tasks = 0;
        for(int i = 0; i < q.size(); i++)
        {
            int temp = q.front();
            q.pop();
            
            temp += speeds[completeTask + i];
            q.push(temp);
        }
        
        while(q.front() >= 100 && !q.empty())
        {
            tasks++;
            completeTask++;
            q.pop();
        }
        
        if(tasks != 0)
        {
            answer.push_back(tasks);
        }
    }
    
    return answer;
}
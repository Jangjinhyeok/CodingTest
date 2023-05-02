#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    vector<int> front;
    for(int i = 0; i < num_list.size(); i++)
    {
        if(i < n)
            front.push_back(num_list[i]);
        else
            answer.push_back(num_list[i]);
    }
    
    answer.insert(answer.end(),front.begin(),front.end());
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    int n = 0;
    for(auto i : todo_list)
    {
        if(!finished[n])
            answer.push_back(i);
        n++;
    }
    return answer;
}
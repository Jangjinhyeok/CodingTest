#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    vector<int> temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i)
                temp.push_back(1);
            else
                temp.push_back(0);
        }
        answer.push_back(temp);
        temp.clear();
    }
    return answer;
}
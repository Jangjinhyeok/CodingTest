#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    deque<int> dqArr;

    for (auto i : arr)
        dqArr.push_back(i);

    for (int i = 0; i < query.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = dqArr.size() - 1; j > query[i]; j--)
                dqArr.pop_back();
        }
        else
        {
            for (int j = 0; j < query[i]; j++)
                dqArr.pop_front();
        }
    }
    
    for (auto i : dqArr)
    {
        answer.push_back(i);
    }
    return answer;
}
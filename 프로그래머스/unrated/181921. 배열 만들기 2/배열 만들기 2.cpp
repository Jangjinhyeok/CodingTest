#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for (int i = l; i <= r; i++)
    {
        string temp = to_string(i);
        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[j] != '5' && temp[j] != '0')
                break;
            else if (j == temp.size() - 1)
                answer.emplace_back(i);
        }
    }

    if (answer.empty())
        answer.emplace_back(-1);
    return answer;
}
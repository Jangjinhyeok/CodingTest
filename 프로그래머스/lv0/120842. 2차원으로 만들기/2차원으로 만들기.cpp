#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> temp;
    int i = 0;
    while (i != num_list.size() / n)
    {
        for (int j = i * n; j < i*n + n; j++)
        {
            temp.push_back(num_list[j]);
        }
        answer.push_back(temp);
        temp.clear();
        i++;
    }

    return answer;
        
    return answer;
}
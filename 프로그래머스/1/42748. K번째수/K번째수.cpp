#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    for (auto arr : commands)
    {
        for (int i = arr[0]-1; i < arr[1]; i++)
            temp.push_back(array[i]);
    
        sort(temp.begin(), temp.end());
        answer.push_back(temp[arr[2] - 1]);
        temp.clear();
    }
    return answer;
}
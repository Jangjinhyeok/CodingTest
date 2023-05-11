#include <string>
#include <vector>

using namespace std;

    vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int temp = -1;
    for (auto query : queries)
    {
        for (int i = query[0]; i < query[1] + 1; i++)
        {
            if (arr[i] <= query[2])
                continue;
            else
            {
                if(temp == -1)
                    temp = arr[i];
                else if(temp > arr[i])
                    temp = arr[i];
            }
        }
        answer.emplace_back(temp);
        temp = -1;
    }
    return answer;
}
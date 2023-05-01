#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i == j)
                continue;
            else
            {
                if (arr[i][j] != arr[j][i])
                    return answer = 0;
            }
        }
    }
    
    return answer;
}
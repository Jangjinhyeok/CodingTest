#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    vector<int> temp;
    int row = arr.size();
    int col = arr[0].size();
    
    if(row == col)
        answer = arr;
    else if(row > col)
    {
        for(int i = 0; i < row; i++)
        {
            for(int j = col; j < row; j++)
                arr[i].emplace_back(0);
        }
        answer = arr;
    }
    else
    {
        for(int i = 0; i < col; i++)
        {
            temp.emplace_back(0);
        }
        for(int i = row; i < col; i++)
        {
            arr.emplace_back(temp);
        }
        answer = arr;
    }
    return answer;
}
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    
    vector<int> answer;
    for(vector<int> c : commands)
    {
        int start = c[0] - 1;
        int end = c[1] - 1;
        int idx = c[2] - 1;
        vector<int> temp;
        for(int i = start; i <= end; i++)
        {
            temp.push_back(array[i]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[idx]);
    }
    
    return answer;
}
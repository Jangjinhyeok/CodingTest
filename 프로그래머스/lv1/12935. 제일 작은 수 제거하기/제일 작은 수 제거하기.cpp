#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minNum = arr[0];
    int minIdx = 0;
    if(arr.size() == 1)
    {
        answer.emplace_back(-1);
        return answer;
    }
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(min(minNum,arr[i]) != minNum)
        {
            minNum = min(minNum,arr[i]);
            minIdx = i;
        }
    }
    arr.erase(arr.begin() + minIdx,arr.begin() + minIdx + 1);
    answer = arr;
    return answer;
}
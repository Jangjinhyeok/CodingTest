#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    int idx;
    for(int i : arr)
    {
        for(int j : delete_list)
        {
            if(j == i)
            {
                break;
            }
            if(j == delete_list[delete_list.size()-1])
                answer.push_back(i);
        }
    }
    return answer;
}
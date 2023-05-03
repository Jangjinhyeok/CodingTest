#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    answer = arr;
    for(auto i : queries)
    {
        swap(answer[i[0]],answer[i[1]]);
    }
    return answer;
}
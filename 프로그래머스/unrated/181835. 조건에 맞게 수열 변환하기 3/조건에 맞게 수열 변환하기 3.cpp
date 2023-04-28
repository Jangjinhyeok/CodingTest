#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    if(k%2 != 0)
    {
        for(auto i : arr)
            answer.push_back(i*k);
    }
    else
    {
        for(auto i : arr)
            answer.push_back(i+k);
    }
    return answer;
}
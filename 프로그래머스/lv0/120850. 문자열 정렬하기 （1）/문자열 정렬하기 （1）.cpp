#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(auto i : my_string)
    {
        if(i > 47 && i < 58)
            answer.push_back(i - 48);
    }
    sort(answer.begin(),answer.end());
    return answer;
}
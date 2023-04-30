#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    for(auto i : my_string)
    {
        answer.push_back(my_string);
        reverse(my_string.begin(),my_string.end());
        my_string.pop_back();
        reverse(my_string.begin(),my_string.end());
    }
    sort(answer.begin(),answer.end());
    return answer;
}
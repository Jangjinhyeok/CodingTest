#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto i : my_string)
        answer.push_back(tolower(i));
    sort(answer.begin(),answer.end());
    return answer;
}
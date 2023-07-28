#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string num = to_string(n);
    
    for(auto c : num)
        answer.emplace_back(c-'0');
    reverse(answer.begin(),answer.end());
    return answer;
}
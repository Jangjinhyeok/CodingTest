#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    string s2;
    vector<int> temp;
    for(auto c : s)
        temp.emplace_back(c - '0');
    sort(temp.begin(),temp.end(),greater<>());
    
    for(auto n : temp)
        s2.push_back(n + '0');
    
    answer = stol(s2);
    
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(auto i : intStrs)
        if(k < stoi(i.substr(s,l))) answer.push_back(stoi(i.substr(s,l)));
            
    return answer;
}
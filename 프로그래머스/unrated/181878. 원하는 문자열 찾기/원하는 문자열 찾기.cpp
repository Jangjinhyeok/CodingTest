#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string lower_str;
    string lower_pat;
    
    if(myString.size() < pat.size())
        return answer;
    for(auto i : myString)
        lower_str.push_back(tolower(i));
    for(auto i : pat)
        lower_pat.push_back(tolower(i));
    
    if(lower_str.find(lower_pat) != string::npos)
        answer = 1;
    return answer;
}
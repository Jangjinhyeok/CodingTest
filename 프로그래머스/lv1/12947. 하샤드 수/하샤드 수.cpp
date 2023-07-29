#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string s = to_string(x);
    int i = 0;
    for(auto c : s)
        i += c - '0';
    
    answer = (x % i == 0) ? true : false;
        
    return answer;
}
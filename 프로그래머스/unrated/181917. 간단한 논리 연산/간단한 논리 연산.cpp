#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    bool a1 = true;
    bool a2 = true;
    
    if(x1 || x2)
        a1 = true;
    else
        a1 = false;
    
    if(x3||x4)
        a2 = true;
    else
        a2 = false;
    
    if(a1&&a2)
        answer = true;
    else
        answer = false;
    
    return answer;
}
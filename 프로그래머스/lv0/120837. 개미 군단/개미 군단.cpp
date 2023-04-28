#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    vector<int> ant = {5,3,1};
    
    for(auto i : ant)
    {
        answer += hp / i;
        hp = hp - ((hp/i) * i);
        if(hp == 0)
            break;
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for(auto i : dic)
    {
        for(auto j : spell)
        {
            if(i.find(j) == string::npos)
            {
                break;
            }
            else if(spell.back() == j && i.find(j) != string::npos)
            {
                answer = 1;
            }
        }
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    int i = 0;
    while(i != code.size())
    {
        if(i%q == r)
            answer.push_back(code[i]);
        
        i++;    
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (auto c : s)
    {
        if (c != ' ')
        {
            if (c + n > 64 && c + n < 91)
                answer.push_back(c + n);
            else if (c + n > 96 && c + n < 123 && c > 96)
                answer.push_back(c + n);
            else
                answer.push_back(c + n - 26);
        } 
        else
            answer.push_back(' ');
    }
    return answer;
}
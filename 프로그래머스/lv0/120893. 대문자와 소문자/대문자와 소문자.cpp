#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto i : my_string)
    {
        if(i > 64 && i < 91)
            answer.push_back(i+32);
        else
            answer.push_back(i-32);
    }
    return answer;
}
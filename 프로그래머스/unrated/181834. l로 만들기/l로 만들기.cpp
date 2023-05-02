#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto i : myString)
    {
        if(i < 108)
            answer.push_back('l');
        else
            answer.push_back(i);
    }
    return answer;
}
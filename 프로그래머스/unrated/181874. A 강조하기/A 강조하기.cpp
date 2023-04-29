#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto i : myString)
    {
        if(i == 'a' || i == 'A')
            answer.push_back(toupper(i));
        else
            answer.push_back(tolower(i));
    }
    return answer;
}
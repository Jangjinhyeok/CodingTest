#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto i : myString)
    {
        //아스키코드 숫자가 아니여도 i < 'l' 도 가능
        if(i < 108)
            answer.push_back('l');
        else
            answer.push_back(i);
    }
    return answer;
}
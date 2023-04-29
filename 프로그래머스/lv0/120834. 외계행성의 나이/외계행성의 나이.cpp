#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string str_age = "";
    str_age = to_string(age);
    for(auto i : str_age)
        answer.push_back(97+(i - '0'));
        
    return answer;
}
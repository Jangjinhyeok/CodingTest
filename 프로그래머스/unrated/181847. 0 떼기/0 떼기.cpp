#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    answer = n_str;
    for(auto i : n_str)
    {
        if(i != '0')
            break;
        else
            answer.erase(answer.begin());
    }
    return answer;
}
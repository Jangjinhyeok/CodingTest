#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for(auto i : str_list)
    {
        if(i.find(ex) == string::npos) answer.append(i);
    }
    return answer;
}
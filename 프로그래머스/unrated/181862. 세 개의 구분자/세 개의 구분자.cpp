#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp;
    for(auto c : myStr)
    {
        if((c == 'a' || c == 'b' || c == 'c') && temp.empty())
            continue;
        else if((c == 'a' || c == 'b' || c == 'c') && !temp.empty())
        {
            answer.push_back(temp);
            temp.clear();
        }
        else
            temp.push_back(c);   
    }
    if(answer.empty() && temp.empty())
        answer.push_back("EMPTY");
    else if(!temp.empty())
        answer.push_back(temp);
    return answer;
}
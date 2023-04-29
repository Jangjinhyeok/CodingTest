#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) 
{
    string answer = "";
    for (auto i : my_string)
    {
        if (i == alp[0])
            answer.push_back(toupper(i));
        else
            answer.push_back(i);
    }
    return answer;
}
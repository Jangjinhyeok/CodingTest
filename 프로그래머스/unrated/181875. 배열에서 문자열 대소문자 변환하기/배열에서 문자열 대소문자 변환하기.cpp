#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
    vector<string> answer;
    for (int i = 0; i < strArr.size(); i++)
    {
        string temp;
        if (i % 2 == 0)
        {
            for (auto j : strArr[i])
                temp.push_back(tolower(j));
            answer.push_back(temp);
            temp.clear();
        }
        else
        {
            for (auto k : strArr[i])
                temp.push_back(toupper(k));
            answer.push_back(temp);
            temp.clear();
        }
    }
    return answer;
}
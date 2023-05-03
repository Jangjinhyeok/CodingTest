#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer;
    bool is_in = false;
    int idx = 0;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (answer.empty())
            answer.push_back(s[i]);
        else if (answer[idx] == s[i])
        {
            is_in = true;
            continue;
        }
        else if (answer[idx] != s[i] && !is_in)
        {
            answer.push_back(s[i]);
            idx++;
        }

        else if (answer[idx] != s[i] && is_in)
        {
            answer.pop_back();
            answer.push_back(s[i]);
            is_in = false;
        }
    }
    
    //sort된 s에서 마지막에 중복인데 삭제를 못해서 추가한코드 
    if (is_in)
        answer.pop_back();
    return answer;
}
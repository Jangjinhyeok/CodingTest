#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<char> temp;
    for (int i = 0; i < s.size(); i++)
    {
        int idx = 0;
        if (temp.empty())
        {
            temp.push_back(s[i]);
            answer.push_back(-1);
            continue;
        }
        else if (find(temp.begin(), temp.end(), s[i]) == temp.end())
        {
            temp.push_back(s[i]);
            answer.push_back(-1);
            continue;
        }
        
        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                if (idx == 0)
                    idx = i - j;
                else if (idx > i - j)
                    idx = i - j;
            }
        }
        answer.push_back(idx);
    }
    
    return answer;
}
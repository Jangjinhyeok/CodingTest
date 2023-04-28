#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    if(s1.size() >= s2.size())
    {
        for(int i = 0; i < s1.size(); i++)
        {
            for(int j = 0; j < s2.size(); j++)
            {
                if(s1[i].compare(s2[j]) == 0)
                   answer++;
            }
        }
    }
    else
    {
        for(int i = 0; i < s2.size(); i++)
        {
            for(int j = 0; j < s1.size(); j++)
            {
                if(s2[i].compare(s1[j]) == 0)
                    answer++;
            }
        }
    }
    return answer;
}
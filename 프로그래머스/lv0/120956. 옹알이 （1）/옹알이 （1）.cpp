#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> bab = { {"aya", "ye", "woo", "ma"} };
    
    for (auto str : babbling)
    {
        for (auto str2 : bab)
        {
            while(str.find(str2) != string::npos)
            {
                int temp = str.find(str2);
                for(int i = 0; i < str2.length(); i++)
                    str.replace(temp+i,1,"*");
            }
        }

        while(str.find("*") != string::npos)
        {
            str.replace(str.find("*"), 1, "");
        }

        if (str.empty())
            answer++;
    }
     
    return answer;
}
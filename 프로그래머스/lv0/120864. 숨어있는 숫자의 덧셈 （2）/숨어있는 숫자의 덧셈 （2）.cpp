#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num = "";
    for(auto i : my_string)
    {
        if(i > 47 && i < 58)
            num.push_back(i);
        else
        {
            if(num.empty())
                continue;
            answer = answer + stoi(num);
            num.clear();
        }
    }
    
    if(!num.empty())
        answer = answer + stoi(num);
    return answer;
}
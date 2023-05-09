#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i = 0; i < 52; i++)
        answer.emplace_back(0);
    
    for(auto c : my_string)
    {
        if(c > 64 && c < 91)
        {
            int idx = c - 65;
            answer[idx]++;
        }
        else if(c > 96 && c < 123)
        {
            int idx = c - 97 + 26;
            answer[idx]++;
        }
    }
    return answer;
}
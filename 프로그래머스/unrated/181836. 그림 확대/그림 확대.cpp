#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string temp;
    for(auto s : picture)
    {
        for(auto c : s)
        {
            for(int i = 0; i < k; i++)
                temp.push_back(c);
        }
        for(int i = 0; i < k; i++)
            answer.emplace_back(temp);
        temp.clear();
    }
    return answer;
}
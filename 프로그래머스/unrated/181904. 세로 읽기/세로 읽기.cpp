#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    vector<string> temp;
    int i = 0;
    while (m * i < my_string.size())
    {
        temp.push_back(my_string.substr(m * i, m));
        i++;
    }

    for (auto i : temp)
        answer.push_back(i[c-1]);
        
    return answer;
}
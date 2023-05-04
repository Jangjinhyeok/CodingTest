#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> temp;
    stringstream ss(my_string);
    string s;
    while (ss >> s)
        temp.push_back(s);

    int idx = 0;
    while (idx < temp.size())
    {
        if (idx == 0)
        {
            answer += stoi(temp[idx]);
            idx++;
        }
        else if (temp[idx] == "+")
        {
            answer += stoi(temp[idx+1]);
            idx += 2;
        }
        else if (temp[idx] == "-")
        {
            answer -= stoi(temp[idx+1]);
            idx += 2;
        }
    }
    
    return answer;
}
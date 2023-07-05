#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    string tmp;
    vector<string> exp;

    int n1;
    int n2;
    for (auto str : quiz)
    {
        stringstream stream(str);
        while (stream >> tmp)
            exp.push_back(tmp);
        
        n1 = stoi(exp[0]);
        n2 = stoi(exp[2]);

        if (exp[1] == "+")
        {
            if (stoi(exp[4]) != n1 + n2)
                answer.push_back("X");
            else
                answer.push_back("O");
        }
        else
        {
            if (stoi(exp[4]) != n1 - n2)
                answer.push_back("X");
            else
                answer.push_back("O");
        }

        exp.clear();
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    vector<string> expression;
    string temp;
    for (int i = 0; i < binomial.size(); i++)
    {
        if (binomial[i] != ' ')
            temp.push_back(binomial[i]);
        else if (binomial[i] == ' ')
        {
            expression.push_back(temp);
            temp.clear();
        }
        if (i == binomial.size() - 1)
            expression.push_back(temp);
    }

    if (expression[1] == "+")
        answer = stoi(expression[0]) + stoi(expression[2]);
    else if(expression[1] == "-")
        answer = stoi(expression[0]) - stoi(expression[2]);
    else
        answer = stoi(expression[0]) * stoi(expression[2]);


    return answer;
}
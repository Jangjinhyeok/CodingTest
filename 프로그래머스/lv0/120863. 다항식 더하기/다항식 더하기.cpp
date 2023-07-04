#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    
    string str;
    vector<string> temp;
    stringstream stream(polynomial);
    while (stream >> str)
        temp.emplace_back(str);

    int xCnt = 0;
    int nCnt = 0;

    for (auto s : temp)
    {
        if (s.find('x') != string::npos)
        {
            if (s.size() > 1)
            {
                int idx = s.find('x');
                string coefficient = s.substr(0, idx);
                xCnt += stoi(coefficient);
            }
            else
                xCnt++;
        }
        else
        {
            if (s != "+")
                nCnt += stoi(s);
        }
    }

    if (nCnt > 0 && xCnt > 0)
    {
        if(xCnt != 1)
            answer += to_string(xCnt);
        answer += "x + ";
        answer += to_string(nCnt);
    }
    else if (nCnt > 0 && xCnt == 0)
    {
        answer += to_string(nCnt);
    }
    else
    {
        if(xCnt != 1)
            answer += to_string(xCnt);
        answer += "x";
    }


    
    return answer;
}
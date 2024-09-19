#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream stream(s);
    vector<string> temp;
    string str;
    while(stream >> str)
        temp.push_back(str);

    int tempCnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
            answer.push_back(' ');
        else
        {
            if(temp[tempCnt][0] < 48 || temp[tempCnt][0] > 57)
                temp[tempCnt][0] = toupper(temp[tempCnt][0]);       
        
            for(int j = 1; j < temp[tempCnt].size(); j++)
            {
                if(temp[tempCnt][j] > 64 && temp[tempCnt][j] < 91)
                {
                    temp[tempCnt][j] = tolower(temp[tempCnt][j]);
                }
            }
            answer.append(temp[tempCnt]);
            i += temp[tempCnt].size()-1;
            tempCnt++;
        }
    }
    
    /*
    for(int i = 0; i < temp.size(); i++)
    {
        if(temp[i][0] < 48 || temp[i][0] > 57)
            temp[i][0] = toupper(temp[i][0]);       
        
        for(int j = 1; j < temp[i].size(); j++)
        {
            if(temp[i][j] > 64 && temp[i][j] < 91)
                temp[i][j] = tolower(temp[i][j]);
        }
        answer.append(temp[i]);
        if(i != temp.size()-1)
            answer.push_back(' ');
    }
    */
    return answer;
}
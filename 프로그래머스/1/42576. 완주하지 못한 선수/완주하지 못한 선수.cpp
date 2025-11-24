#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
    string answer = "";
    unordered_map<string, int> completionMember;
    for(string s : completion)
    {
        completionMember[s]++;
    }
    
    for(string s : participant)
    {
        if(completionMember.find(s) != completionMember.end())
        {
            completionMember[s]--;
            if(completionMember[s] < 0)
                return s;
        }
        else
        {
            return s;            
        }
    }
}
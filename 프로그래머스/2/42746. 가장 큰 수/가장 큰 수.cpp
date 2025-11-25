#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> str;
    for(int num : numbers)
    {
        string s = to_string(num);
        str.push_back(s);
    }
    
    sort(str.begin(), str.end(), [](const string& a, const string& b){
        return a + b > b + a;
    });
    
    for (string s : str)
        answer.append(s);
    
    if (answer[0] == '0') return "0";
    return answer;
}
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    int n = 0;
    vector<int> nums;
    string str;
    stringstream stream(s);
    while (stream >> str)
    {
        n = stoi(str);
        nums.push_back(n);
    }

    int min = *min_element(nums.begin(),nums.end());
    int max = *max_element(nums.begin(),nums.end());
    answer.append(to_string(min));
    answer.push_back(' ');
    answer.append(to_string(max));
        
    
    return answer;
}
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    int answer;
    unordered_map<int, int> pocketmon;
    for(int i : nums)
    {
        pocketmon[i]++;
    }
    
    int canGet = nums.size() / 2;
    
    int allKind = 0;
    for(auto temp : pocketmon)
    {
        allKind++;
    }
    
    if(allKind >= canGet)
    {
        answer = canGet;
    }
    else
    {
        answer = allKind;
    }
    
    return answer;
}
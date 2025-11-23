#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) 
{
    vector<int> answer;
    
    // 1. 각 스테이지에 "머무는" 사람 수 카운트
    int stageStay[502] = {0}; // 1 ~ N, N+1까지 쓸 수 있게 넉넉하게
    for (int s : stages)
    {
        if (s <= N) // N+1은 전부 클리어 상태라 실패율 계산에선 제외
        {
            stageStay[s]++;
        }
    }
    
    // 2. 실패율 계산
    int totalPlayers = stages.size();
    vector<pair<double, int>> fail; // {실패율, 스테이지 번호}
    
    for (int stage = 1; stage <= N; stage++)
    {
        if (totalPlayers == 0)
        {
            // 도전자 자체가 없으면 실패율 0
            fail.push_back({0.0, stage});
        }
        else
        {
            double rate = (double)stageStay[stage] / (double)totalPlayers;
            fail.push_back({rate, stage});
        }
        
        // 이 스테이지에서 실패한 사람들은 다음 스테이지 도전자에서 제외
        totalPlayers -= stageStay[stage];
    }
    
    // 3. 실패율 정렬
    sort(fail.begin(), fail.end(), [](const pair<double,  int>& a, const pair<double, int>& b){
        if(a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    });
    
    for (auto& p : fail)
    {
        answer.push_back(p.second);
    }
    
    return answer;
}
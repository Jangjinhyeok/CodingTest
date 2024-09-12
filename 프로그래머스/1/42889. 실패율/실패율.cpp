#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    map<int, int>data;
    map<int, float> failRatio;
    vector<int> challanger;
    
    for (int i = 1; i <= N; i++)
    {
        challanger.push_back(0);
        data.insert(pair<int, int>(i, 0));
    }

    //각 스테이지별 도전자수와 클리어유저수 저장
    for (int i = 0; i < stages.size(); i++)
    {
        if (data.find(stages[i]) == data.end())
            for (int j = 1; j <= N; j++)
            {
                challanger[j - 1]++;
                data.at(j)++;
            }
        else
        {
            for (int j = 1; j < stages[i]; j++)
                data.at(j)++;
            for (int j = 0; j < stages[i]; j++)
                challanger[j]++;
        }
    }
    
    //실패율저장
    for (int i = 0; i < challanger.size(); i++)
    {
        float fail = (float)(challanger[i]-data.at(i + 1)) / (float)challanger[i];
        failRatio.insert(pair<int, float>(i + 1, fail));
    }
    
    //실패율이 적은 순서대로 answer에 넣기
    while (!failRatio.empty())
    {
        pair<int,float> temp = *failRatio.begin();
        for (auto iter = failRatio.begin(); iter != failRatio.end(); iter++)
        {
            if (iter == failRatio.begin())
                continue;

            if (temp.second < iter->second)
            {
                temp.first = iter->first;
                temp.second = iter->second;
            }
            else if (temp.second == iter->second)
            {
                if (temp.first < iter->first)
                    continue;
            }
        }
        answer.push_back(temp.first);
        failRatio.erase(temp.first);
    }
    return answer;
}
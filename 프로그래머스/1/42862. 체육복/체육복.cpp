#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int visited[31] = { 0 };
    int answer = 0;

    for (auto& lostNum : lost)
    {
        if (find(reserve.begin(), reserve.end(), lostNum) != reserve.end())
        {
            visited[lostNum] = 1;
            reserve.erase(find(reserve.begin(), reserve.end(), lostNum));
            answer++;
            continue;
        }
    }

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (auto& lostNum : lost)
    {
        if (visited[lostNum])
            continue;
        if (find(reserve.begin(), reserve.end(), lostNum - 1) != reserve.end())
        {
            answer++;
            reserve.erase(find(reserve.begin(), reserve.end(), lostNum - 1));
        }
        else if (find(reserve.begin(), reserve.end(), lostNum + 1) != reserve.end())
        {
            answer++;
            reserve.erase(find(reserve.begin(), reserve.end(), lostNum + 1));
        }
    }

    answer += n - lost.size();
    return answer;
}
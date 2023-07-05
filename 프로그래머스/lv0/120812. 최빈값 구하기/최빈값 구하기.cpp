#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    vector<int> uniq;

    for (auto i : array)
    {
        if (uniq.empty())
        {
            uniq.emplace_back(i);
            continue;
        }

        if (find(uniq.begin(), uniq.end(), i) == uniq.end())
            uniq.emplace_back(i);
    }

    int cnt = 0;
    int maxCnt = -1;
    
    for (auto i : uniq)
    {
        for (auto j : array)
        {
            if (j == i)
                cnt++;
        }

        if (maxCnt < cnt)
        {
            maxCnt = cnt;
            cnt = 0;
            answer = i;
        }
        else if (cnt < maxCnt)
            cnt = 0;
        else
        {
            answer = -1;
            cnt = 0;
        }
    }
    
    return answer;
}   
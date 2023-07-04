#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    
    int dist;
    int saveNum;
    int cnt = 0;
    int savedSize = numlist.size();
    while (cnt < savedSize)
    {
        dist = -1;
        for (auto i : numlist)
        {
            if (dist == -1)
            {
                saveNum = i;
                dist = abs(i - n);
                continue;
            }

            if (dist > abs(i - n))
            {
                saveNum = i;
                dist = abs(i - n);
            }
            else if (dist == abs(i - n))
            {
                saveNum = (saveNum > i) ? saveNum : i;
            }
        }

        answer.emplace_back(saveNum);
        numlist.erase(find(numlist.begin(), numlist.end(), saveNum));
        cnt++;
    }
    
    return answer;
}
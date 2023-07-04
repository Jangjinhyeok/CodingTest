#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    map<int, int> temp;
    for (int i = 0; i < attendance.size(); i++)
    {
        if (attendance[i])
        {
            temp.insert(make_pair(rank[i], i));
        }
    }

    int cnt = 0;
    for (auto it = temp.begin(); it != temp.end(); it++)
    {
        if (cnt == 0)
        {
            answer += 10000 * it->second;
            cnt++;
        }
        else if (cnt == 1)
        {
            answer += 100 * it->second;
            cnt++;
        }
        else
        {
            answer += it->second;
            break;
        }
    }
    
    return answer;
}
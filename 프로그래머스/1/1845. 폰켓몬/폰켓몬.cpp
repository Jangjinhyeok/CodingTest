#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> temps;

    for (auto i : nums)
    {
        if (temps.empty())
        {
            temps.push_back(i);
            continue;
        }
        
        bool duplicate = false;
        for (int j = 0; j < temps.size(); j++)
        {
            if (temps[j] == i)
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
            temps.push_back(i);
    }

    if (nums.size() / 2 <= temps.size())
        answer = nums.size() / 2;
    else
        answer = temps.size();
    
    return answer;
}
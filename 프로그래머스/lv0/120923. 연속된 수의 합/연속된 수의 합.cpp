#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int sum = 0;
    int n = 0;
        
    if (total == 0)
    {
        for (int i = 0; i < num; i++)
        {
            answer.emplace_back(num/2 - n);
            n++;
        }
        sort(answer.begin(),answer.end());
        return answer;
    }
    while (sum != total)
    {
        sum = 0;
        answer.clear();
        for (int i = 0; i < num; i++)
        {
            sum += (total - n - i);
            answer.emplace_back(total - n - i);
        }
        n++;
    }    
    sort(answer.begin(),answer.end());
    
    return answer;
}
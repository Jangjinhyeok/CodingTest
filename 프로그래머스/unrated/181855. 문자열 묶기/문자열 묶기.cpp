#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> size;
    for(auto s : strArr)
        size.emplace_back(s.size());
    
    vector<int> cnt;
    cnt.emplace_back(1);
    int idx = 0;
    sort(size.begin(),size.end());
    
    for(int i = 0;i < size.size()-1; i++)
    {
        if(size[i] == size[i+1])
            cnt[idx] = cnt[idx] + 1;
        else
        {
            idx++;
            cnt.emplace_back(1);
        }
    }
    
    for(auto i : cnt)
    {
        answer = max(i,answer);
    }
    return answer;
}
#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    int temp = k;
    sort(dungeons.begin(),dungeons.end());
    do
    {
        int n = 0;
        k = temp;
        for(auto arr : dungeons)
        {
            if(arr[0] <= k)
            {
                k -= arr[1];
                n += 1;
            }
        }
        answer = max(n,answer);
    }
    while(next_permutation(dungeons.begin(),dungeons.end()));
    
    return answer;
}
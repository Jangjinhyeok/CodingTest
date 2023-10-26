#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    //에라토스테네스의 체
    int answer = 0;
    vector<int> prime;
    
    for(int i = 0; i <= n; i++)
        prime.push_back(i);
    
    for(int i = 2; i<=sqrt(n);i++)
    {
        if(prime[i] == 0)
            continue;
        for(int j = i*i; j<=n; j+=i)
            prime[j] = 0;
    }
    
    for(auto i : prime)
        if(i != 0)
            answer++;
    answer--;

    return answer;
}
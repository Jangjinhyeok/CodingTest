#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = 0;
    int lcm = 0;

    if (n < m)
    {
        for (int i = 1; i <= n; i++)
        {
            if (m % i == 0 && n % i == 0 && gcd < i)
                gcd = i;
        }
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            if (m % i == 0 && n % i == 0 && gcd < i)
                gcd = i;
        }
    }
    answer.emplace_back(gcd);
    lcm = gcd * (n / gcd) * (m / gcd);
    answer.emplace_back(lcm);
    
    
    return answer;
}
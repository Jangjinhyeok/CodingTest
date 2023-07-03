#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool check_prime(int n)
{
    bool is_prime = false;
    int primeCnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            primeCnt++;
    }

    if (primeCnt == 2)
        is_prime = true;

    return is_prime;
}

int solution(int a, int b) {
    int answer = 1;
    
    vector<int> aDivisor;
    vector<int> bDivisor;
    int commonDivisor=0;
    for(int i = 1; i <= a; i++)
    {
        if(a%i == 0)
            aDivisor.emplace_back(i);
    }
    
    for(int i = 1; i <= b; i++)
    {
        if(b%i == 0)
            bDivisor.emplace_back(i);
    }
    
    for(auto i : bDivisor)
    {
        if(find(aDivisor.begin(),aDivisor.end(),i) != aDivisor.end())
        {
            if(commonDivisor < i)
                commonDivisor = i;
        }
    }
    
    a = a / commonDivisor;
    b = b / commonDivisor;
    
    vector<int> bPrime;
    for(int i = 2; i <= b; i++)
    {
        if(check_prime(i) && b % i == 0)
            bPrime.emplace_back(i);
    }
    
    for(auto i : bPrime)
    {
        if(i == 2)
            continue;
        else if(i == 5)
            continue;
        else
        {
            answer = 2;
            break;
        }
    }

    return answer;
}
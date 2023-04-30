#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int gcd(int a, int b)
{
    if(a%b == 0)
        return b;
    else
        return gcd(b,a%b);
}
int solution(int n) {
    int answer = n * (6 / gcd(n,6)) / 6;
    
    return answer;
}
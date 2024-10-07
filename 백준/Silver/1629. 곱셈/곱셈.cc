#include <iostream>
using namespace std;

long long a, b, c;
long long go(long long a, long long b)
{
    //기저사례
    if (b == 1)
        return a % c;

    long long temp = go(a, b / 2);
    temp = (temp * temp) % c;

    //b가 홀수일 때를 대비해서 한번 더 곱해줌
    if (b % 2 != 0)
        temp = (temp * a) % c;
    return temp;
}
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a, b);

    return 0;
}
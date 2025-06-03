#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long answer = (a + b) * (a - b);
    cout << answer << endl;
    return 0;
}
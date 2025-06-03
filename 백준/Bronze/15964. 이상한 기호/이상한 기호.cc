#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int answer = (a + b) * (a - b);
    cout << answer;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double result1 = (double)a * b / c;
    double result2 = (double)a / b * c;

    cout << (int)max(result1, result2);

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int temp = a / 2;
    if(temp >= b)
    {
        cout << b;
    }
    else if(temp < b)
    {
        cout << temp;
    }
    return 0;
}
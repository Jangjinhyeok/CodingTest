#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < 10; i++)
    {
        cout << n << " * ";
        cout << i << " = ";
        cout << n * i;
        if(i != 9)
        {
            cout << '\n';
        }
    }
    return 0;
}
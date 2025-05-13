#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n / 4;
    for(int i = 0; i < temp; i++)
    {
        cout << "long ";
    }
    cout << "int";
    return 0;
}
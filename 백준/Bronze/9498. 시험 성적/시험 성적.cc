#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n > 89)
    {
        cout << "A";
    }
    else if(n < 90 && n > 79)
    {
        cout << "B";
    }
    else if(n < 80 && n > 69)
    {
        cout << "C";
    }
    else if(n < 70 && n > 59)
    {
        cout << "D";
    }
    else
        cout << "F";
    return 0;
}
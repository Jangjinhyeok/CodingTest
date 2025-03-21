#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        if(temp <= 40)
        {
            sum += 40;
            continue;
        }
        sum += temp;
    }
    cout << sum / 5;
    return 0;
}
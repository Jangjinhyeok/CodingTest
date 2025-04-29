#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int answer = 0;
    
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        answer += (temp * temp);
    }
    
    cout << answer % 10;
    
    return 0;
}
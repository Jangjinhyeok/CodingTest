#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int answer = 0;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        
        if(a == 136)
            answer += 1000;
        else if(a == 142)
            answer += 5000;
        else if(a == 148)
            answer += 10000;
        else
            answer += 50000;
    }
    cout << answer;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int answer = 0;
    while (a >= 2 && b >= 2)
    {
	    a -= 2;
	    b -= 2;
	    answer++;
    }
   
    cout << answer;
    return 0;
}
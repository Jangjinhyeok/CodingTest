#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,p;
    cin >> a >> b >> c >> d >> p;
    
    int x = a * p;
    int y = b;
    if(p > c)
    {
        y += ((p - c) * d);
    }
    
    cout << min(x, y) << '\n';
    
    return 0;
}
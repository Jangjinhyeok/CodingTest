#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    string s;
    cin >> s;
    if (s.length() == 2) 
    {
        a = s[0] - '0';
        b = s[1] - '0';
    } 
    else if (s.length() == 3) 
    {
        if (s[1] == '0') 
        {
            a = 10;
            b = s[2] - '0';
        } 
        else 
        {
            a = s[0] - '0';
            b = 10;
        }
    } 
    else 
    {
        a = 10;
        b = 10;
    }
    
    cout << a + b << endl;
    
    
    return 0;
}
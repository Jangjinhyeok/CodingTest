#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int m;
    cin >> m;
    int bitset = 0;

    for (int i = 0; i < m; ++i) 
    {
        string s;
        int x;
        cin >> s;
        if (s == "add") 
        {
            cin >> x;
            bitset |= (1 << (x - 1));
        } 
        else if (s == "remove") 
        {
            cin >> x;
            bitset &= ~(1 << (x - 1));
        } 
        else if (s == "check") 
        {
            cin >> x;
            if (bitset & (1 << (x - 1))) cout << "1\n";
            else cout << "0\n";
        } 
        else if (s == "toggle") 
        {
            cin >> x;
            bitset ^= (1 << (x - 1));
        } 
        else if (s == "all") 
            bitset = (1 << 20) - 1;
        else if (s == "empty") 
            bitset = 0;
    }
    return 0;
}

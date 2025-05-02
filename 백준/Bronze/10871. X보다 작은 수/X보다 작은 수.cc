#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(x > temp)
        {
            v.push_back(temp);
        }
    }
    
    for(auto& a : v)
    {
        cout << a << " ";
    }
    return 0;
}
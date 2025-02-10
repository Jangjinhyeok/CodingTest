#include <iostream>

using namespace std;

int count[10001];

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> num;
        count[num]++;
    }

    for (int i = 1; i <= 10000; i++) 
    {
        while (count[i]--) 
            cout << i << '\n';
        
    }

    return 0;
}
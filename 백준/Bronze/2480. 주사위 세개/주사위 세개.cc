#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int answer;
    cin >> a >> b >> c;
    int max = a;
    for(int i = 1; i < 3; i++)
    {
        if(i == 1)
        {
            if(max < b)
                max = b;
        }
        else if(i == 2)
        {
            if(max < c)
                max = c;
        }
    }
    if(a == b && b == c)
    {
        answer = 10000 + (a * 1000);
        cout << answer;
        return 0;
    }
    
    if (a == b && b != c)
    {
        answer = 1000 + (a * 100);
        cout << answer;
        return 0;
    }
    else if(b == c && a != c)
    {
        answer = 1000 + (b * 100);
        cout << answer;
        return 0;
    }
    else if(a == c && b != c)
    {
        answer = 1000 + (a * 100);
        cout << answer;
        return 0;
    }
    
    if (a != b && b != c)
    {
        answer = max * 100;
        cout << answer;
        return 0;
    }
   
}
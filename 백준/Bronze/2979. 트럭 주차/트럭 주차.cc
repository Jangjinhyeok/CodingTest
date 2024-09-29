#include <iostream>


using namespace std;

int A, B, C;
int a, b;
int cnt[100];
int answer = 0;
int main()
{
    
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        for (int i = a; i < b; i++)
            cnt[i]++;
    }

    for (int i = 1; i < 100; i++)
    {
        if (cnt[i] == 1)
            answer += A;
        else if (cnt[i] == 2)
            answer += (B * 2);
        else if (cnt[i] == 3)
            answer += (C * 3);
    }
    cout << answer;
    return 0;
}
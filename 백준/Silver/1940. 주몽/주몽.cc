#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int n, m, answer;
vector<int> number;
vector<int> c;

int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        number.push_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        int sum = number[i];
        for (int j = i + 1; j < n; j++)
        {
            if (sum + number[j] == m)
                answer++;
        }
    }
    cout << answer;
    
    return 0;
}
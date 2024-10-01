#include <iostream>
#include <vector>

using namespace std;

int n, k;
vector<int> temp;

void permutation()
{
    int sum = 0;
    int max = -1;
    for (int i = 0; i < n - k + 1; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            sum += temp[j];
        }
        if (max < sum || max == -1)
            max = sum;
        sum = 0;
    }

    cout << max;
}
int main()
{    
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        temp.push_back(t);
    }
    permutation();
    return 0;
}
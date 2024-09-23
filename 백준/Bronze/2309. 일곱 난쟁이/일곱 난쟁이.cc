#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void findCombination(vector<int> mans, int twoMansTall)
{
    int idx1 = -1;
    int idx2 = -1;
    for (int i = 0; i < 9; i++)
    {
        idx1 = i;
        for (int j = i; j < 9; j++)
        {
            if (mans[i] + mans[j] == twoMansTall)
            {
                idx2 = j;
                mans.erase(mans.begin() + idx2);
                break;
            }
        }

        if (idx2 != -1)
        {
            mans.erase(mans.begin() + idx1);
            break;
        }

    }
    for (int i : mans)
        cout << i << endl;
    return;
}
int main()
{
    vector<int> mans;
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        int temp;
        cin >> temp;
        mans.push_back(temp);
        sum += temp;
    }

    sort(mans.begin(), mans.end());
    int twoMansTall = sum - 100;
    findCombination(mans, twoMansTall);

    return 0;
}
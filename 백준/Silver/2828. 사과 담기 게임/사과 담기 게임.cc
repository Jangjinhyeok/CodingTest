#include <iostream>
#include <vector>
using namespace std;

int n, m, j;
int answer = 0;
vector<int> screen;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    cin >> j;

    for (int i = 0; i < j; i++)
    {
        int temp;
        cin >> temp;
        screen.push_back(temp);
    }

    int bucketLoc = 1;
    for (int i : screen)
    {
        while (true)
        {
            if (i < bucketLoc)
            {
                answer++;
                bucketLoc--;
            }
            else if (i > bucketLoc + m - 1)
            {
                answer++;
                bucketLoc++;
            }
            else
                break;
        }
    }
    
    cout << answer;
    return 0;
}
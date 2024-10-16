#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int h, w;
    vector<vector<char>> sky;
    int checkTime[101][101] = {};
    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        vector<char> temp;
        for (int j = 0; j < w; j++)
        {
            char t;
            cin >> t;
            temp.push_back(t);
        }
        sky.push_back(temp);
    }

    for (int i = 0; i < h; i++)
    {
        if (find(sky[i].begin(), sky[i].end(), 'c') == sky[i].end())
        {
            for (int j = 0; j < w; j++)
                checkTime[i][j] = -1;
        }
        else 
        {
            int idx = find(sky[i].begin(), sky[i].end(), 'c') - sky[i].begin();
            for (int j = 0; j < idx; j++)
                checkTime[i][j] = -1;

            while (idx != w)
            {
                for (int j = idx; j < w; j++)
                {
                    if (sky[i][j] == 'c')
                        break;
                    checkTime[i][j]++;
                }
                idx++;
            }

        }
        
        for(int j = 0; j < w; j++)
        {
            cout << checkTime[i][j];
            if(j == w-1)
                cout << "\n";
            else
                cout << " ";
        }
    }
    return 0;
}
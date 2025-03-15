#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> nums;
    map<int, int> frequency;
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        nums.push_back(temp);
        frequency[temp]++;
    }

    int a = round(sum / n);

    sort(nums.begin(), nums.end());
    int b = nums[n / 2];

    int max_freq = 0;
    vector<int> modes;

    for (auto& pair : frequency) 
    {
        if (pair.second > max_freq) 
        {
            max_freq = pair.second;
            modes.clear();
            modes.push_back(pair.first);
        }
        else if (pair.second == max_freq) 
        {
            modes.push_back(pair.first);
        }
    }

    int c;
    if (modes.size() > 1) {
        sort(modes.begin(), modes.end());
        c = modes[1];
    }
    else {
        c = modes[0];
    }

    int d = nums.back() - nums.front();

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    return 0;
}
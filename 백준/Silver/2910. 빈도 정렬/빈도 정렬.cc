#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, C;
    cin >> N >> C;

    unordered_map<int, pair<int, int>> freq; // {number, {frequency, first position}}
    vector<int> order;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (freq.find(num) == freq.end()) {
            freq[num] = { 1, i };
            order.push_back(num);
        }
        else {
            freq[num].first++;
        }
    }

    sort(order.begin(), order.end(), [&](int a, int b) {
        if (freq[a].first != freq[b].first)
            return freq[a].first > freq[b].first;
        return freq[a].second < freq[b].second;
        });

    for (int num : order) {
        for (int i = 0; i < freq[num].first; i++) {
            cout << num << " ";
        }
    }

    return 0;
}
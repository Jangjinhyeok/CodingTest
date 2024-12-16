#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,string>& a, const pair<int, string>& b) {
    return a.first < b.first;
}

int main() {
    vector<pair<int, string>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int age = 0;
        string name = "";
        cin >> age >> name;
        m.push_back({ age, name });
    }
    
    stable_sort(m.begin(), m.end(), cmp);
    
    for (auto& a : m)
        cout << a.first << " " << a.second << '\n';
    
    return 0;
}
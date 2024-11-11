#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> nList;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nList.push_back(temp);
    }
    
    // 이분 탐색을 위한 정렬
    sort(nList.begin(), nList.end());
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;
        // 이분 탐색 사용
        cout << binary_search(nList.begin(), nList.end(), target) << '\n';
    }
    
    return 0;
}
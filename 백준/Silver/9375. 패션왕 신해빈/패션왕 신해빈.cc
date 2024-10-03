#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        unordered_map<string, int> clothes;
        for (int i = 0; i < n; i++) {
            string name, type;
            cin >> name >> type;  // name은 사용하지 않지만 입력은 받아야 함
            clothes[type]++;
        }
        
        long long combination = 1;  // int 대신 long long 사용
        for (const auto& [type, count] : clothes) {
            combination *= (count + 1);
        }
        
        cout << combination - 1 << "\n";
    }
    
    return 0;
}
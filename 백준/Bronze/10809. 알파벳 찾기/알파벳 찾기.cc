#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    int alpha[26];
    memset(alpha, -1, sizeof(alpha));
    
    for (int i = 0; i < s.length(); i++) {
        int idx = s[i] - 'a';
        if (alpha[idx] == -1) {
            alpha[idx] = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << alpha[i];
        if (i < 25) {
            cout << " ";
        }
    }
    
    return 0;
}
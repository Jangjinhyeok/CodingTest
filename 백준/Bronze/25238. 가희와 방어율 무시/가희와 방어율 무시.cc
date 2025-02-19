#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int remaining = (a * (100 - b)) / 100; // 남은 체력 계산

    cout << (remaining < 100 ? 1 : 0);
    return 0;
}
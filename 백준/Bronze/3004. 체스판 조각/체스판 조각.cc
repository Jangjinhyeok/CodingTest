#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n / 2;          // floor(N/2)
    int b = n - a;          // ceil(N/2)

    cout << (a + 1) * (b + 1) << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a, string b) {
    string result = "";
    int carry = 0;

    // 길이를 맞추기 위해 짧은 쪽에 0을 채운다
    while (a.length() < b.length()) a = '0' + a;
    while (b.length() < a.length()) b = '0' + b;

    // 뒤에서부터 한 자리씩 더한다
    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }

    if (carry) result += carry + '0';

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string A, B;
    cin >> A >> B;
    cout << add(A, B) << endl;
    return 0;
}
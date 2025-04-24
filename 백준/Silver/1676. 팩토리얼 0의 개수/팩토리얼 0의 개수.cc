#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    
    // N!에 포함된 5의 개수 세기
    // 5의 배수마다 5가 1개씩 추가됨
    count += N / 5;
    
    // 25의 배수마다 5가 1개 더 추가됨 (이미 위에서 1개 계산했으므로)
    count += N / 25;
    
    // 125의 배수마다 5가 1개 더 추가됨 (이미 위에서 2개 계산했으므로)
    count += N / 125;
    
    cout << count << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m;
    cin >> m;
    
    // 처음에 공은 1번 컵에 있음
    int ball_position = 1;
    
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        
        // 현재 공이 있는 컵이 바뀌는 경우만 처리
        if (ball_position == x) {
            ball_position = y;
        } else if (ball_position == y) {
            ball_position = x;
        }
        // 공이 없는 두 컵을 바꾸는 경우는 공의 위치에 영향 없음
    }
    
    cout << ball_position << endl;
    
    return 0;
}
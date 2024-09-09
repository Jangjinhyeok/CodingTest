#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int solution(vector<int>scoville, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap(scoville.begin(), scoville.end());

    int mix_count = 0;

    while (minHeap.top() < k) {
        // 만약 더 이상 섞을 수 없다면 -1 반환
        if (minHeap.size() < 2) {
            return -1;
        }

        // 가장 맵지 않은 음식 두 개 꺼내기
        int least_spicy = minHeap.top();
        minHeap.pop();
        int second_least_spicy = minHeap.top();
        minHeap.pop();

        // 새로운 스코빌 지수 계산
        int new_scoville = least_spicy + (second_least_spicy * 2);

        // 새로운 스코빌 지수 힙에 다시 삽입
        minHeap.push(new_scoville);

        // 섞은 횟수 증가
        mix_count++;
    }

    return mix_count;
}
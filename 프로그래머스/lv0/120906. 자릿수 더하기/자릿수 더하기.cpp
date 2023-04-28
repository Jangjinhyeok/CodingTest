#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    string arr;
    //정수를 문자열로 바꿀 때 to_string 사용
    arr = to_string(n);

    for (auto i : arr)
        // 문자를 정수로 바꿀 때 "- '0'"를 추가 해줌
        answer = answer + (i - '0');
    return answer;
}
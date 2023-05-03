#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int idx = 0;
    for (int i = 0; i < k-1; i++)
    {
        idx += 2;
        if (idx > numbers.size())
            idx -= numbers.size();
    }
    answer = numbers[idx];
    return answer;
}
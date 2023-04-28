#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end());
    int max1 = numbers.back();
    numbers.pop_back();
    int max2 = numbers.back();
    answer = max1 * max2;
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max1 = 0;
    int max2 = 0;
    //수정 전
    /*
    sort(numbers.begin(),numbers.end());
    max1 = numbers.back();
    numbers.pop_back();
    max2 = numbers.back();
    answer = max1 * max2;
    */
    
    //수정 후
    sort(numbers.begin(),numbers.end());
    max1 = numbers[numbers.size()-1];
    max2 = numbers[numbers.size()-2];
    
    return answer = max1 * max2;
}
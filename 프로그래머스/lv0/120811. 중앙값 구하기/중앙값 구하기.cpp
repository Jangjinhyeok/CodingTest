#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(),array.end());
    const int mid_idx = array.size()/2;
    answer = array[mid_idx];
    return answer;
}
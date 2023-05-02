#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(),array.end());
    int answer = array[0];
    for(auto i : array)
    {
        if(abs(answer - n) > abs(i - n) && i != answer)
        {
            answer = i;
        }
    }
    return answer;
}
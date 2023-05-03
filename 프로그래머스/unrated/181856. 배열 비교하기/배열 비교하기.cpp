#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    if(arr1.size() > arr2.size())
        answer = 1;
    else if(arr1.size() < arr2.size())
        answer = -1;
    else
    {
        int sum1 = 0;
        int sum2 = 0;
        for(auto i : arr1)
            sum1 = sum1 + i;
        for(auto i : arr2)
            sum2 = sum2 + i;
        if(sum1 == sum2)
            answer = 0;
        else if(sum1 > sum2)
            answer = 1;
        else
            answer = -1;
    }
    return answer;
}
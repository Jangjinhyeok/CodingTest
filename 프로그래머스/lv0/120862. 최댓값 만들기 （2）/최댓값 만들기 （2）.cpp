#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    /*
    int answer = numbers[0] * numbers[1];
    
    for(int i = 0; i < numbers.size()-1; i++)
    {
        for(int j = i+1; j < numbers.size(); j++)
        {
            if(i == 0 && j == 1)
                continue;
            answer = max(answer,numbers[i] * numbers[j]);
        }
    }
    */
    //한 천재의 발상
    sort(numbers.begin(),numbers.end());
    int n = numbers.size();
    answer = max(numbers[0] * numbers[1] , numbers[n -1] * numbers[n - 2]);
    
    return answer;
}
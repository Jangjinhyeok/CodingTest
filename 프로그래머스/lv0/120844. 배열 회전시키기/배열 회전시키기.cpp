#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;

    if(direction[0] == 'r')
    {
        for(int i = numbers.size()-1; i > 0; i--)
            swap(numbers[i],numbers[i-1]);

    }
    else
    {
        for(int i = 0; i < numbers.size()-1; i++)
            swap(numbers[i],numbers[i+1]);
    }
    
    //algorithm에 rotate라는 함수가 있음
    return numbers;
}
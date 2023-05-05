#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(),sides.end());
    
    // 알고있는 수
    for(int i = 1; i <= sides[1]; i++)
    {
        if(i + sides[0] > sides[1])
            answer++;
    }
    
    // 모르는 수
    for(int i = sides[1]+1; i < sides[0]+sides[1]; i++)
        answer++;
    
    return answer;
}
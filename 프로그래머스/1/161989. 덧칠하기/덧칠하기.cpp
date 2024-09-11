#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    //section 첫번째 값 추가 및 횟수 추가
    int first = section[0];
    answer++;
    //cout << "section 첫번째 값 : " << section[0] << "  횟수 : " << answer << endl;
    
    for(int i = 1; i < section.size(); i++)
    {
        if(section[i] < m + first)
        {
            //cout << "롤러 길이 안에 포함 : " << section[i] << "  횟수 : " << answer << endl;
            continue;
        }
        else
        {
            first = section[i];
            answer++;
            //cout<< "롤러 길이 밖 : "<<section[i] << "  횟수 : " << answer << endl;
        }
    }
    return answer;
}
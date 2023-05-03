#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num = "";
    for(auto i : my_string)
    {
        //숫자면 num에 넣기
        if(i > 47 && i < 58)
            num.push_back(i);
        else
        {
            //num이 비었으면 그냥 진행
            if(num.empty())
                continue;
            //num을 int로 바꿔서 더해주기
            answer = answer + stoi(num);
            //num 초기화
            num.clear();
        }
    }
    //반복문이 끝나고 num에 숫자가 남아있으면 마저 더해주기
    if(!num.empty())
        answer = answer + stoi(num);
    
    //stringstream 공부해서 다시 적용해볼것
    return answer;
}
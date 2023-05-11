#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    if(chicken < 10)
        return answer;
    
    int coupon = chicken / 10;
    int surplus = chicken % 10;
    answer = coupon;
    
    while (coupon >= 10)
    {
        //10으로 나누고 남는 쿠폰 개수
        surplus += coupon % 10;
        //쿠폰으로 먹을 수 있는 치킨 개수
        coupon = coupon / 10;
        answer += coupon;
    }
    
    surplus += coupon;

    while(surplus >= 10)
    {
        surplus += surplus%10;
        surplus /= 10;
        answer += surplus;
    }
    
    
    return answer;
}
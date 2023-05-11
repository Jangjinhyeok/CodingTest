#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;

    int coupon = chicken / 10;
    answer += coupon;
    coupon += chicken % 10;
    int temp = 0;
    
    while (coupon >= 10)
    {
        temp = coupon;
        coupon = coupon/10;
        answer += coupon;
        coupon += (temp % 10);
    }
    
    return answer;
}
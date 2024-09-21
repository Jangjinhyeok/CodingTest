#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;


int solution(int n) {
    int answer = 0;
    bitset<20> a(n);
    int n2 = n+1;
    while(true)
    {
        bitset<20> b(n2);
        if(b.count() != a.count())
            n2++;
        else
            break;
    }
    answer = n2;
    return answer;
}
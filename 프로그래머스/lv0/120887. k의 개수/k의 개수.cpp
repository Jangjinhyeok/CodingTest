#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string temp;
    for (int num = i; num <= j; num++)
    {
        temp = to_string(num);
        for (auto i : temp)
        {
            if (i == k + '0')
                answer++;
        }
        temp.clear();
    }
    return answer;
}
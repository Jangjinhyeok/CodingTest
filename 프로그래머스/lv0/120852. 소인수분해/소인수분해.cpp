#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int temp = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if(temp != i)
                answer.push_back(i);
            temp = i;
            n /= i;
            i--;
        }
    }
    return answer;
}
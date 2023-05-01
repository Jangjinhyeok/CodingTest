#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    int i = n;
    while(i != 1)
    {
        if (i%2 == 0)
        {
            i = i / 2;
            answer.push_back(i);
        }
        else
        {
            i = 3 * i + 1;
            answer.push_back(i);
        }
    }
    return answer;
}
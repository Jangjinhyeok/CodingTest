#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string temp;
    for (int i = 1; i <= n; i++)
    {
        answer++;
        while (1)
        {
            if (answer % 3 == 0)
            {
                answer++;
                continue;
            }
            temp = to_string(answer);
            if (temp.find("3") != string::npos)
            {
                answer++;
                continue;
            }
            break;
        }
    }
    
    return answer;
}
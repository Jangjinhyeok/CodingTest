#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int i = myString.find(pat);
    while (1)
    {
        if (i != string::npos)
        {
            answer++;
            i = myString.find(pat, i + 1);
        }
        else
        {
            break;
        }
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    for (auto i : my_string)
    {
        if(i > 47 && i < 58)
            answer = answer + (i - '0');
    }

    return answer;
}
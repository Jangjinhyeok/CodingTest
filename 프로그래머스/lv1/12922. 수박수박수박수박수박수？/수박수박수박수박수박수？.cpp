#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    if(n == 1)
        return "수";
    
    if(n % 2 != 0)
    {
        for(int i = 0; i < n / 2; i++)
        {
            answer.append("수박");
        }
        answer.append("수");
    }
    else
        for(int i = 0; i < n/2; i++)
            answer.append("수박");
        
    return answer;
}
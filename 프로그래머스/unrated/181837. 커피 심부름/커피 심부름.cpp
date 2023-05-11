#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(auto coffee : order)
    {
        if(coffee == "anything")
            answer += 4500;
        else if(coffee.find("ice") != string::npos || coffee.find("hot") != string::npos)
        {
            if(coffee.find("americano") != string::npos)
                answer += 4500;
            else
                answer += 5000;
        }
        else
        {
            if(coffee.find("americano") != string::npos)
                answer += 4500;
            else
                answer += 5000;
        }
    }
    return answer;
}
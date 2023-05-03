#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int num;
    string temp;
    stringstream stream(s);
    while (stream >> temp)
    {
        if (temp != "Z")
        {
            num = stoi(temp);
            answer += num;
        }
        else
                answer -= num;
    }

    return answer;
}
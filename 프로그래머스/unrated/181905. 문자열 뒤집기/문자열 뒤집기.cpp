#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    int n = 0;
    for (int i = 0; i < my_string.size(); i++)
    {
        if (i < s)
            answer.push_back(my_string[i]);
        else if (i >= s && i <= e)
        {
            answer.push_back(my_string[e - n]);
            n++;
        }
        else if (i > e)
            answer.push_back(my_string[i]);
    }
    return answer;
}
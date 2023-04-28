#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for (int i = 0; i < rny_string.size(); i++)
    {
        if (rny_string[i] == 'm')
        {
            rny_string.erase(rny_string.begin() + i);
            rny_string.insert(rny_string.begin() + i, 'r');
            rny_string.insert(rny_string.begin() + i+1, 'n');
        }
    }
    answer = rny_string;
    return answer;
}
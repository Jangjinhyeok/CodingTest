#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    while (1)
    {
        if (my_string.find("a") != string::npos)
            my_string.erase(my_string.find("a"), 1);
        else if (my_string.find("e") != string::npos)
            my_string.erase(my_string.find("e"), 1);
        else if (my_string.find("i") != string::npos)
            my_string.erase(my_string.find("i"), 1);
        else if (my_string.find("o") != string::npos)
            my_string.erase(my_string.find("o"), 1);
        else if (my_string.find("u") != string::npos)
            my_string.erase(my_string.find("u"), 1);
        else
            break;
    }
    answer.assign(my_string);
    return answer;
}
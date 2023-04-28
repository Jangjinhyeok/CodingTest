#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
        int answer = 0;
    int x = 0;
    int y = 0;

    string str1 = "";
    str1 = to_string(a);
    str1 += to_string(b);

    string str2 = "";
    str2 = to_string(b);
    str2 += to_string(a);

    x = stoi(str1);
    y = stoi(str2);

    if (str1 > str2)
        answer = x;
    else
        answer = y;

    return answer;
}
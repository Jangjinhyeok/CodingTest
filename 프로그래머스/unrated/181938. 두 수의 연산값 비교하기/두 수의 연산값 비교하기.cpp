#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int calc(int a, int b)
{
    string x = to_string(a);
    string y = to_string(b);

    string result = x + y;
    return stoi(result);
}

int solution(int a, int b) {
    int answer = 0;
    answer = max(calc(a, b), (2 * a * b));
    return answer;
}
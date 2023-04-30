#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int order) {
    int answer = 0;
    vector<char> game = { '3','6','9' };
    for (auto i : to_string(order))
    {
        if (find(game.begin(), game.end(), i) != game.end())
        {
            answer++;
        }
    }
    return answer;
}
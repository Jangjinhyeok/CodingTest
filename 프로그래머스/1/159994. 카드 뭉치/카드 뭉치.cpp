#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
        int card1Idx = 0;
    int card2Idx = 0;

    for (auto s : goal)
    {
        if (cards1[card1Idx] == s)
        {
            card1Idx++;
            continue;
        }
        else if (cards2[card2Idx] == s)
        {
            card2Idx++;
            continue;
        }
        else
        {
            answer = "No";
            return answer;
        }
    }
    answer = "Yes";
    return answer;
}
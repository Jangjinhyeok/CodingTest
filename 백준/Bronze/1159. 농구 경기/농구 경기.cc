#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int num;
vector<string> players;
int main()
{
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string s;
        cin >> s;
        players.push_back(s);
    }

    map<char, int> cnt;
    cnt.insert(pair<char, int>(players[0][0], 1));
    for (int i = 1; i < players.size(); i++)
    {
        auto iter = cnt.find(players[i][0]);
        if (iter != cnt.end())
            iter->second++;
        else
            cnt.insert(pair<char, int>(players[i][0], 1));
    }

    string answer = "";
    for (auto iter = cnt.begin(); iter != cnt.end(); iter++)
    {
        if (iter->second >= 5)
            answer.push_back(iter->first);
    }

    if (answer.empty())
        answer = "PREDAJA";

    cout << answer;
    return 0;
}
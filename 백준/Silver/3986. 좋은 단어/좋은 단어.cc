#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int n;
vector<string> words;
int answer = 0;


int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }

    for (string s : words)
    {
        stack<char> check;
        if (s.size() % 2 != 0)
            continue;

        for (char c : s)
        {
            if (check.size() && check.top() == c)
                check.pop();
            else
                check.push(c);
        }
        if (check.size() == 0)
            answer++;
    }

    cout << answer;
    return 0;
}
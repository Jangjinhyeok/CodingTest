#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
	unordered_set<string> heard;
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        heard.insert(str);
    }

    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        if (heard.find(str) != heard.end())
            answer.push_back(str);
    }

    sort(answer.begin(), answer.end());
    cout << answer.size() << '\n';
    for (const string& s : answer)
        cout << s << '\n';

	return 0;
}
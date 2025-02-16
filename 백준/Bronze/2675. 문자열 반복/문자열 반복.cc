#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	vector<string> answers;

	while (t--)
	{
		int n;
		string s;
		cin >> n >> s;
		string temp = "";
		for (auto c : s)
		{
			for (int i = 0; i < n; i++)
			{
				temp.push_back(c);
			}
		}
		answers.push_back(temp);
		temp.clear();
	}

	for (auto s : answers)
		cout << s << "\n";

	return 0;
}

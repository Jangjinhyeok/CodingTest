#include <bits/stdc++.h>
using namespace std;

struct Compare 
{
	bool operator()(const string& a, const string& b) const {
		if (a.length() != b.length()) {
			return a.length() < b.length();
		}
		return a < b;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	set<string, Compare> words;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		words.insert(temp);
	}

	for (string s : words)
		cout << s << '\n';
	return 0;
}
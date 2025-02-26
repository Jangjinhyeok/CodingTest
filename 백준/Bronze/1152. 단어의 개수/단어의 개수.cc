#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string sentence;
	getline(cin, sentence);
	stringstream ss(sentence);
	string s;
	int n = 0;
	while (ss >> s)
	{
		n++;
	}
	cout << n;
	return 0;
}
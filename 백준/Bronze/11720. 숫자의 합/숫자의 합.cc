#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int answer = 0;
	for (char c : s)
	{
		answer += c - '0';
	}
	cout << answer;
	return 0;
}
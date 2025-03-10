#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int aCnt = 0;
	int bCnt = 0;
	string s;
	cin >> s;

	for (char c : s)
	{
		if (c == 'A')
			aCnt++;
		else
			bCnt++;
	}

	if (aCnt > bCnt)
		cout << 'A';
	else if (bCnt > aCnt)
		cout << 'B';
	else
		cout << "Tie";
	return 0;
}
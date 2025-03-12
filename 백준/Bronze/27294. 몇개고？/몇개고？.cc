#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	int s;
	cin >> s;

	if (t <= 11)
	{
		//아침
		cout << 280;
	}
	else if (t >= 12 && t <= 16)
	{
		//점심
		if (s == 1)
			cout << 280;
		else
			cout << 320;
	}
	else
	{
		//저녁
		cout << 280;
	}

	return 0;
}
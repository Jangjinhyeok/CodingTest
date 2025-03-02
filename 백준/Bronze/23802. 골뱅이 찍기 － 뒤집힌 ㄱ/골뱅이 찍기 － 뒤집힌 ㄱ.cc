#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int cnt = -1;
	for(int i = 0; i < (n * 5); i++)
	{
		cnt++;
		if (cnt < n)
		{
			for (int i = 0; i < n * 5; i++)
				cout << "@";
		}
		else
		{
			for (int i = 0; i < n; i++)
				cout << "@";
		}
		cout << '\n';
		
	}

	return 0;
}
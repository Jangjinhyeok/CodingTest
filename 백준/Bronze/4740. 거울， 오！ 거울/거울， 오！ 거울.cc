#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	while (true)
	{
		string s;
		getline(cin, s);
		if (s == "***")
		{
			break;
		}

		reverse(s.begin(), s.end());
		cout << s << "\n";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	for (int i = 9; i > 0; i--)
	{
		if (n % i == 0 && n / i < 10)
		{
			cout << "1\n";
			break;
		}
		
		if (i == 1)
		{
			cout << "0\n";
		}
	}

	return 0;
}

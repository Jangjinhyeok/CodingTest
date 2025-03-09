#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a, b, c, d, n;
	cin >> a >> b >> c >> d >> n;
	int temp = a + b + c + d;
	int answer = 0;
	while (true)
	{
		if (temp / 4 < n)
		{
			temp++;
			answer++;
		}
		else
			break;
	}
	cout << answer;
	return 0;
}
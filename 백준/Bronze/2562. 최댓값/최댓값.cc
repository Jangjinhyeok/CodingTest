#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int maxNum = 0;
	int maxIdx = 0;
	for(int i = 0; i < 9; i++)
	{
		int temp;
		cin >> temp;
		if (temp > maxNum)
		{
			maxNum = temp;
			maxIdx = i + 1;
		}
	}

	cout << maxNum << '\n';
	cout << maxIdx;
	return 0;
}
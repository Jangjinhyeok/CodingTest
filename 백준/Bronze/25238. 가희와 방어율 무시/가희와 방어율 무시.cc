#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int a, b;
	cin >> a >> b;
	int temp = (a * (100 - b)) / 100;


	if (temp < 100)
		cout << 1;
	else
		cout << 0;
	return 0;
}
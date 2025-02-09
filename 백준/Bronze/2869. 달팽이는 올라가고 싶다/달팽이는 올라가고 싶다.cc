#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	int b;
	int v;
	cin >> a >> b >> v;
	int answer = 0;
	int current = 0;
	answer = (v - a) / (a - b) + 1;
	if ((v - a) % (a - b) != 0)
		answer++;
	cout << answer;
	return 0;
}
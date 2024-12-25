#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	int answer = 1;
	int temp = 1;
	for (int i = n; i > k; i--)
		answer *= i;

	for (int i = 1; i <= (n - k); i++)
		temp *= i;
	answer /= temp;
	cout << answer;
	return 0;
}
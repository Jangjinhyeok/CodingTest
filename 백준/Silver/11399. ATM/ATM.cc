#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> line;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		line.push_back(temp);
	}

	sort(line.begin(), line.end());

	int sum = 0;
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		sum += line[i];
		answer += sum;
	}
	
	cout << answer;
	return 0;
}
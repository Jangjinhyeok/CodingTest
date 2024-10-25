#include <bits/stdc++.h>
using namespace std;
int n,root,r;
vector<int> v[51];
int dfs(int here) // 루트 노드 수를 구하는 함수
{
	int temp = 0;
	int child = 0;
	for (int there : v[here])
	{
		if (there == r) continue;
		temp += dfs(there);
		child++;
	}
	if (child == 0) return 1;
	return temp;
}

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num == -1)
			root = i;
		else
			v[num].push_back(i);
	}
	cin >> r;
	if (r == root)
	{
		cout << 0 << "\n";
		return 0;
	}
	cout << dfs(root) << "\n";
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	
	for (int i = 0; i < n; i++)
	{
		pair<int, int> temp;
		cin >> temp.first >> temp.second;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
    for(auto p : v)
        cout << p.first << " " << p.second << "\n";
	return 0;
}
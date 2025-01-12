#include <bits/stdc++.h>

using namespace std;

vector<int> towers[101];
int visited[101] = {0};

int dfs(int node) 
{
	visited[node] = 1;
	int count = 1;
	for (int next : towers[node]) {
		if (!visited[next]) {
			count += dfs(next);
		}
	}
	return count;
}

int solution(int n, vector<vector<int>> wires) {
    for (auto& wire : wires)
    {
        int a = wire[0];
        int b = wire[1];
        towers[a].push_back(b);
        towers[b].push_back(a);
    }

    int minDiff = n;

    for (auto& wire : wires) {
        int a = wire[0], b = wire[1];

        towers[a].erase(find(towers[a].begin(), towers[a].end(), b));
        towers[b].erase(find(towers[b].begin(), towers[b].end(), a));

        fill(begin(visited), end(visited), 0);
        int size1 = dfs(a); 
        int size2 = n - size1; 
        minDiff = min(minDiff, abs(size1 - size2));

        towers[a].push_back(b);
        towers[b].push_back(a);
    }
    
    return minDiff;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
	sort(score.begin(), score.end(), greater<>());

	vector<vector<int>> temp;
	vector<int> box;
	for (auto i : score)
	{
		if(box.size() < m)
			box.push_back(i);
		
		if (box.size() == m)
		{
			temp.push_back(box);
			box.clear();
		}
	}

	for (auto v : temp)
		answer += v[m - 1] * m;
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> noDabs = { {1,2,3,4,5},{2,1,2,3,2,4,2,5},{3,3,1,1,2,2,4,4,5,5} };
	vector<int> noDabsIdx = {0,0,0};
	vector<int> noDabsCnt = {0,0,0};


	for (int i = 0; i < answers.size(); i++)
	{
		if (answers[i] == noDabs[0][noDabsIdx[0]])
			noDabsCnt[0]++;
		if (answers[i] == noDabs[1][noDabsIdx[1]])
			noDabsCnt[1]++;
		if (answers[i] == noDabs[2][noDabsIdx[2]])
			noDabsCnt[2]++;

		for (int k = 0; k < noDabsIdx.size(); k++)
			noDabsIdx[k]++;

		if (noDabsIdx[0] == 5)
			noDabsIdx[0] = 0;
		if (noDabsIdx[1] == 8)
			noDabsIdx[1] = 0;
		if (noDabsIdx[2] == 10)
			noDabsIdx[2] = 0;
	}


	int max = -1;
	for (int i = 0; i < noDabsCnt.size(); i++)
	{
		if (max < noDabsCnt[i])
			max = noDabsCnt[i];
	}

	for (int i = 0; i < noDabsCnt.size(); i++)
		if (noDabsCnt[i] == max)
			answer.push_back(i+1);
    return answer;
}
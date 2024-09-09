#include <string>
#include <vector>
#include <queue>

using namespace std;


bool findBigger(queue<int> q, int p)
{
	vector<int> temp;
	int size = q.size();
	for (int i = 0; i < size; i++)
	{
		temp.push_back(q.front());
		q.pop();
	}

	for (int i = 0; i < size; i++)
	{
		if (p < temp[i])
			return true;
	}

	for (int i = 0; i < size; i++)
	{
		if (p == temp[i])
			return false;
	}
	return false;
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    queue<int> q;
	for (int i = 0; i < priorities.size(); i++)
		q.push(priorities[i]);
	int cnt = 0;
	int currentLoc = location;
    
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();

		if (findBigger(q, temp))
		{
			q.push(temp);
			if (currentLoc == 0)
				currentLoc = q.size()-1;
			else
				currentLoc--;
		}
		else
		{
			cnt++;
			if (currentLoc == 0)
				return cnt;
			currentLoc--;
		}
	}
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    vector<int> temp;
    for (int i = 1; i < food.size(); i++)
	{
		if (food[i] % 2 != 0)
			temp.push_back(food[i] - 1);
		else
			temp.push_back(food[i]);
	}


	for (int j = 0; j < temp.size(); j++)
	{
		for (int k = 0; k < temp[j]/2; k++)
			answer.push_back(j + 1 + '0');
	}
	answer.push_back(0+ '0');
	for (int j = temp.size()-1; j >= 0; j--)
	{
		for (int k = 0; k < temp[j] / 2; k++)
			answer.push_back(j + 1+ '0');
	}
    return answer;
}
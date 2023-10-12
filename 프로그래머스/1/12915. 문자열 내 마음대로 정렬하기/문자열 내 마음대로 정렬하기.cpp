#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str, int n) {
    vector<string> answer;
    string temp;
    	for (int i = 0; i < str.size() - 1; i++)
	{
		for (int j = i + 1; j < str.size(); j++)
		{
			if (str[i][n] > str[j][n])
			{
				temp = str[j];
				str[j] = str[i];
				str[i] = temp;
			}
			else if (str[i][n] == str[j][n])
			{
				if (str[i] > str[j])
				{
					temp = str[j];
					str[j] = str[i];
					str[i] = temp;
				}
			}
		}
	}
    answer = str;
    return answer;
}
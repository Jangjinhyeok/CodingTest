#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    
	stringstream stream;
	stream.str(s);
	string temp = "";
	vector<string> streamstr;
	vector<string> transformed_str;
	vector<int> space;
	while (stream >> temp)
		streamstr.emplace_back(temp);
	string answer = "";

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
			answer.push_back(' ');
		else
			answer.push_back('1');
	}

	for (int i = 0; i < streamstr.size(); i++)
	{
		for (int j = 0; j < streamstr[i].size(); j++)
		{
			if (j % 2 == 0)
			{
				streamstr[i][j] = toupper(streamstr[i][j]);
			}
			else
			{
				streamstr[i][j] = tolower(streamstr[i][j]);
			}
		}
		transformed_str.emplace_back(streamstr[i]);
	}
	
	int idx = 0;
	for (int i = 0; i < answer.size(); i++)
	{
		if (answer[i] == '1')
		{
			answer.replace(i, transformed_str[idx].size(), transformed_str[idx]);
			i += transformed_str[idx].size();
			idx++;
		}
	}

    
    return answer;
}
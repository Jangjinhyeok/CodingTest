#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> str;
    string temp = "";
    int x = 0;
    int notX = 0;
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
		if (temp.empty())
		{
			temp.push_back(c);
            x++;
            if(i != s.size()-1)
			    continue;           
		}

		if (temp[0] == c)
		{
			x++;
			temp.push_back(c);
		}
		else
		{
			notX++;
			temp.push_back(c);
		}

		if (x == notX)
		{
			str.push_back(temp);
			x = 0;
			notX = 0;
			temp.clear();
		}
        
        
		if (i == s.size() - 1 && !temp.empty())
			str.push_back(temp);
    }
    answer = str.size();
    return answer;
}
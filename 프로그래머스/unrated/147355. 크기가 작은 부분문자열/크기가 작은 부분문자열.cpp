#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
	for (int i = 0; i <= t.size() - p.size(); i++)
	{
		string temp = "";
		for (int j = 0; j < p.size(); j++)
			temp.push_back(t[i + j]);
		long numericTemp = stol(temp);
		long numericP = stol(p);
		if (numericTemp <= numericP)
			answer++;
	}
    
    return answer;
}
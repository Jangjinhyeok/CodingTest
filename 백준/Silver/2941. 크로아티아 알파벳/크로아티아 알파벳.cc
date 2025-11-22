#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<string> cro;
	cro.push_back("c=");
	cro.push_back("c-");
	cro.push_back("dz=");
	cro.push_back("d-");
	cro.push_back("lj");
	cro.push_back("nj");
	cro.push_back("s=");
	cro.push_back("z=");

	string s;
	cin >> s;

	int answer = 0;

	for (auto alpha : cro)
	{
		int alphaSize = alpha.size();
		
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == alpha[0])
			{

				for (int j = 1; j < alphaSize; j++)
				{
					if (s[j + i] != alpha[j])
					{
						break;
					}

					if (j == alphaSize - 1)
					{
						if (alphaSize == 2)
						{
							s[i] = ' ';
							s[i + 1] = ' ';
						}
						else
						{
							s[i] = ' ';
							s[i + 1] = ' ';
							s[i + 2] = ' ';
						}
						answer++;
					}
				}
			}
		}
	}

	for (auto c : s)
	{
		if(c != ' ')
			answer++;
	}

	cout << answer;
	return 0;
}
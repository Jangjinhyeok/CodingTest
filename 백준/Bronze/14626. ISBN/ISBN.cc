#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int m = 0;
	bool flag = false;

	bool multiple = false;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '*')
		{
			if (flag)
			{
				multiple = true;
				flag = !flag;
			}
			else
			{
				flag = !flag;
			}
			continue;
		}
		int n = s[i] - '0';
		if (!flag)
		{
			m += n;
			flag = !flag;
		}
		else 
		{
			m += 3 * n;
			flag = !flag;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (multiple)
		{
			int temp = m + (i * 3);
			if (temp % 10 == 0)
			{
				cout << i;
				return 0;
			}
		}
		else
		{
			int temp = m + i;
			if (temp % 10 == 0)
			{
				cout << i;
				return 0;
			}
		}
	}
}
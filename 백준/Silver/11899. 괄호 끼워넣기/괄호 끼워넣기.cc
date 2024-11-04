#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	stack<char> stk;
	int answer = 0;
	for (char c : s)
	{
		if (stk.empty() && c == ')')
			answer++;
		else if (c == '(')
			stk.push(c);
		else if (c == ')' && !stk.empty())
			stk.pop();
	}
	answer += stk.size();
	cout << answer;
	return 0;
}
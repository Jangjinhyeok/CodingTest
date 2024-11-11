#include <bits/stdc++.h>
using namespace std;
vector<int> num;
vector<char> operChar;
int n;
int answer = -987654321;
string s;

int oper(char a, int b, int c)
{
	if (a == '*') return b * c;
	if (a == '+') return b + c;
	if (a == '-') return b - c;
}

void go(int here, int _num)
{
	if (here == num.size() - 1)
	{
		answer = max(answer, _num);
		return;
	}

	go(here + 1, oper(operChar[here], _num, num[here + 1]));

	if (here + 2 <= num.size() - 1) 
	{
		int temp = oper(operChar[here + 1], num[here + 1], num[here + 2]);
		go(here + 2, oper(operChar[here], _num, temp));
	}
	return;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) num.push_back(s[i] - '0');
		else operChar.push_back(s[i]);
	}
	go(0,num[0]);
	cout << answer << "\n";
	return 0;
}
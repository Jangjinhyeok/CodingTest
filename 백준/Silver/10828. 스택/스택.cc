#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	int n = 0;
	cin >> n;
	stack<int> myStack;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int temp;
			cin >> temp;
			myStack.push(temp);
		}
		else if (s == "pop")
		{
			if (myStack.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			int temp = myStack.top();
			myStack.pop();
			cout << temp << "\n";
		}
		else if (s == "size")
		{
			cout << myStack.size() << "\n";
		}
		else if (s == "empty")
		{
			if (myStack.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "top")
		{
			if (myStack.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			int temp = myStack.top();
			cout << temp << "\n";
		}
	}

	return 0;
}
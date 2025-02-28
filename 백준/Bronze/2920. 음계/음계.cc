#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int ascending[8] = { 1,2,3,4,5,6,7,8 };
	int descending[8] = { 8,7,6,5,4,3,2,1 };
	bool asc = true;
	bool des = true;

	for (int i = 0; i < 8; i++)
	{
		int temp;
		cin >> temp;
		if (asc)
		{
			if (temp != ascending[i])
				asc = false;
		}
		if (des)
		{
			if (temp != descending[i])
				des = false;
		}
	}

	if (asc)
	{
		cout << "ascending";
	}
	else if (des)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int A, B, C;
	cin >> A >> B >> C;

	string newNum;
	newNum = to_string(A);
	newNum.append(to_string(B));
	cout << A + B - C << '\n';
	cout << stoi(newNum) - C;

	return 0;
}
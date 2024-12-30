#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n1, n2;
	cin >> n1 >> n2;
	int a = 1;
	int b = 1;
	
	// 두 수가 동시에 나누어지는 수
	// prime number인 수로만 나누어야 함
	int i = 2;
	while (1)
	{
		if (!checkPrime(i))
		{
			if (i > n1 || i > n2)
			{
				b = a * n1 * n2;
				break;
			}
			i++;
			continue;
		}
		if (n1 % i == 0 && n2 % i == 0)
		{
			n1 /= i;
			n2 /= i;
			a *= i;
			i = 2;
		}
		else
			i++;
	}
    
    cout << a << '\n' << b;
	return 0;
}
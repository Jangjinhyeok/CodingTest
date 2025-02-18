#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int MyYear, MyMonth, MyDay;
	int Year, Month, Day;

	cin >> MyYear >> MyMonth >> MyDay;
	cin >> Year >> Month >> Day;


	int Man_age = Year - MyYear;
	if (Month < MyMonth)
	{
		Man_age -= 1;
	}
	else if (Month == MyMonth)
	{
		if (Day < MyDay)
		{
			Man_age -= 1;
		}
	}
	

	int Segi_age = Year - MyYear + 1;
	int Yeon_age = Year - MyYear;
	
	cout << Man_age << "\n";
	cout << Segi_age << "\n";
	cout << Yeon_age << "\n";
	return 0;
}

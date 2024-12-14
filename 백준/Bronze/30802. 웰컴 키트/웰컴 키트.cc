#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n = 0;
	int t = 0;
	int p = 0;
	int s[6] = {};

	int penBundle = 0;
	int pen = 0;
	int shirtBundle = 0;

	cin >> n;
	for (int i = 0; i < 6; i++)
		cin >> s[i];
	cin >> t >> p;

	for (int i = 0; i < 6; i++)
    {
	    if (s[i] == 0)
		    continue;
	    if (s[i] / t > 0)
	    {
		    shirtBundle += (s[i] / t);
		    if (s[i] % t != 0)
			    shirtBundle++;
	    }
	    else
    		shirtBundle++;
    }
	penBundle = n / p;
	pen = n % p;

	cout << shirtBundle << '\n';
	cout << penBundle << " " << pen << '\n';
	
	return 0;
}
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int temp = 3;
	int m = 0;
	int answer = 0;
	long trit = 0;
	string str_trit = "";
	
	while (n >= 3)
	{
		while (temp <= n)
		{
			m++;
			temp *= 3;
		}
		trit += pow(10, m);
		n -= temp / 3;
		temp = 3;
		m = 0;
	}
	trit += n;
	str_trit = to_string(trit);

	for (int i = 0; i < str_trit.size(); i++)
	{
		int num = str_trit[i] - '0';
		answer += num * pow(3, i);
	}
    return answer;
}
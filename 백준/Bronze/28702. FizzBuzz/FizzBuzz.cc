#include <bits/stdc++.h>
using namespace std;

void CheckFizzBuzz(int temp){
	if (temp % 3 == 0 && temp % 5 == 0)
		cout << "FizzBuzz";
	else if (temp % 3 == 0 && temp % 5 != 0)
		cout << "Fizz";
	else if (temp % 3 != 0 && temp % 5 == 0)
		cout << "Buzz";
	else
		cout << temp;
}

int main(){
	vector<string> v;
	int temp = 0;
	int startIdx = 0;

	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;
		if (isdigit(s[0])){
			temp = stoi(s);
			startIdx = i;
		}
		v.push_back(s);
	}

	for (int i = startIdx; i < 3; i++) {
		if (isdigit(v[i][0])) {
			if (temp == stoi(v[i]))
				continue;
			temp = stoi(v[i]);
		}
		else {
			if(temp != 0)
				temp++;
		}
	}

	//3번째 주어진 문자열의 순서를 구하고 그 다음 번째 순서의 문자열을 구해야 하기에 +1
	temp += 1;
	CheckFizzBuzz(temp);
	
	return 0;
}
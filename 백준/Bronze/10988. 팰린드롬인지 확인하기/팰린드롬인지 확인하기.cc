#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
string s;
int answer = 0;
int main()
{
    cin >> s;
    string temp = s;
    reverse(temp.begin(),temp.end());
    if(temp == s)
        answer = 1;
    cout << answer;
    return 0;
}
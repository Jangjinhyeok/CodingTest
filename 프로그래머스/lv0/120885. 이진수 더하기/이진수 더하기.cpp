#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int translate(string str)
{
    reverse(str.begin(),str.end());
    int trans = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
            trans = trans + pow(2, i);
    }
    return trans;
}

string to_binary(int n)
{
    string s = "";
    if (n == 0)
    {
        s.push_back('0');
        return s;
    }
    while (n > 0)
    {
        s.push_back(n % 2 + '0');
        n = n / 2;
    }
    reverse(s.begin(),s.end());
    return s;
}

string solution(string bin1, string bin2) {
    string answer = "";
    answer = to_binary(translate(bin1) + translate(bin2));
    
    return answer;
}
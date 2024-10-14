#include <bits/stdc++.h>

using namespace std;

vector<char> vowel = { 'a','e','i','o','u' };
bool findVowel(string s)
{
    for (char c : vowel)
    {
        if (find(s.begin(), s.end(), c) != s.end())
            return true;
    }
    return false;
}

bool tripleLetter(string s)
{
    char temp = ' ';
    int vowelCnt = 0;
    int consonantCnt = 0;

    for (char c : s)
    {
        if (find(vowel.begin(), vowel.end(), c) != vowel.end())
        {
            vowelCnt++;
            consonantCnt = 0;
        }
        else
        {
            consonantCnt++;
            vowelCnt = 0;
        }

        if (consonantCnt == 3 || vowelCnt == 3)
            return true;
    }
    return false;
}

bool doubleLetter(string s)
{
    char temp = ' ';
    for (char c : s)
    {
        if (temp == c && c != 'e' && c != 'o')
            return true;
        temp = c;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    while(true)
    {
        //모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
        //모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
        //같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
        cin >> s;
        
        if (s == "end")
            break;

        if (!findVowel(s) || tripleLetter(s) || doubleLetter(s))
            cout << "<" << s << ">" << " is not acceptable.\n";
        else
            cout << "<" << s << ">" << " is acceptable.\n";

    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;


string s;

int main()
{
    cin >> s;
    // a = 97 , z = 122
    // a = 0 , z = 24
    int alpha[26];
    
    for(int i = 0; i < 26; i++)
        alpha[i] = 0;
    
    for(char c : s)
    {
        int idx = c - 97;
        alpha[idx]++;
    }
    
    for(int i = 0; i < 26; i++)
        cout << alpha[i] << " ";
    return 0;
}
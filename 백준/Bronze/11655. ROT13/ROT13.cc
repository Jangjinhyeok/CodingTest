#include <iostream>
#include <string>

using namespace std;

string s;
int main()
{    
    getline(cin, s);
    string decoding;
    for (char c : s)
    {
        if (c > 96 && c < 123)
        {
            if (c + 13 > 122)
                decoding.push_back(c + 13 - 26);
            else
                decoding.push_back(c + 13);
        }
        else if (c > 64 && c < 91)
        {
            if (c + 13 > 90)
                decoding.push_back(c + 13 - 26);
            else
                decoding.push_back(c + 13);
        }
        else if (c > 47 && c < 58)
            decoding.push_back(c);
        else if (c == ' ')
            decoding.push_back(c);
    }

    cout << decoding;

    return 0;
}
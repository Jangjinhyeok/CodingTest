#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
string pattern;
vector<string> names;
int main()
{    
    cin >> n;
    cin >> pattern;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        names.push_back(temp);
    }
    string code1 = pattern.substr(0, pattern.find('*'));
    string code2 = pattern.substr(pattern.find('*')+1, pattern.size());

    bool check = false;
    for (int i = 0; i < n; i++)
    {
        check = false;
        if (names[i].size() < code1.size() + code2.size())
        {
            cout << "NE";
            if (i != n - 1)
                cout << endl;
            continue;
        }
        for (int j = 0; j < code1.size(); j++)
        {
            if (code1[j] != names[i][j])
            {
                cout << "NE";
                if (i != n - 1)
                    cout << endl;
                check = true;
                break;
            }
        }

        if (check)
            continue;

        for (int j = 0; j < code2.size(); j++)
        {
            if (code2[code2.size() - j -1] != names[i][names[i].size() - j - 1])
            {
                cout << "NE";
                if (i != n - 1)
                    cout << endl; 
                check = true;
                break;
            }
        }

        if (check)
            continue;
        else
        {
            cout << "DA";
            if (i != n - 1)
                cout << endl;
        }
    }

    return 0;
}
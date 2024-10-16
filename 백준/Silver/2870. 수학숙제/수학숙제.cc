#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const string& a, const string& b) 
{
    if (a.length() != b.length()) 
        return a.length() < b.length();
    return a < b;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> nums;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string temp;
        for (int j = 0; j < s.size(); j++)
        {
            if (isdigit(s[j]))
                temp.push_back(s[j]);
            else
            {
                if(!temp.empty())
                {
                    while (temp.length() > 1 && temp[0] == '0')
                        temp.erase(0, 1);
                    nums.push_back(temp);
                    temp.clear();    
                }
            }

            
        }
        if (!temp.empty())
        {
            while (temp.length() > 1 && temp[0] == '0')
                temp.erase(0, 1);
            nums.push_back(temp);
        }
    }
    
    sort(nums.begin(),nums.end(),compare);
    for (const string& s : nums)
        cout << s << "\n";

    return 0;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string a, string b) {
    string answer = "";
    int sum = 0;
    int over_ten = 0;
    if (a.size() > b.size())
    {
        for (int i = 1; i <= b.size(); i++)
        {
            sum = (a[a.size() - i] - '0') + (b[b.size() - i] - '0') + over_ten;

            if (sum >= 10)
            {
                sum = sum - 10;
                over_ten = 1;
                answer.push_back(sum + '0');
            }
            else
            {
                answer.push_back(sum + '0');
                over_ten = 0;
            }
        }

        for (int i = b.size() + 1; i <= a.size(); i++)
        {
            sum = (a[a.size() - i] - '0') + over_ten;

            if (sum >= 10)
            {
                sum = sum - 10;
                over_ten = 1;
                answer.push_back(sum + '0');
            }
            else
            {
                answer.push_back(sum + '0');
                over_ten = 0;
            }
        }
        
        if (over_ten == 1)
            answer.push_back(over_ten + '0');
    }
    else if (a.size() < b.size())
    {
        for (int i = 1; i <= a.size(); i++)
        {
            sum = (a[a.size() - i] - '0') + (b[b.size() - i] - '0') + over_ten;

            if (sum >= 10)
            {
                sum = sum - 10;
                over_ten = 1;
                answer.push_back(sum + '0');
            }
            else
            {
                answer.push_back(sum + '0');
                over_ten = 0;
            }
        }

        for (int i = a.size() + 1; i <= b.size(); i++)
        {
            sum = (b[b.size() - i] - '0') + over_ten;

            if (sum >= 10)
            {
                sum = sum - 10;
                over_ten = 1;
                answer.push_back(sum + '0');
            }
            else
            {
                answer.push_back(sum + '0');
                over_ten = 0;
            }
        }
        
        if (over_ten == 1)
            answer.push_back(over_ten + '0');
    }
    else
    {
        for (int i = 1; i <= a.size(); i++)
        {
            sum = (a[a.size() - i] - '0') + (b[b.size() - i] - '0') + over_ten;

            if (sum >= 10)
            {
                sum = sum - 10;
                over_ten = 1;
                answer.push_back(sum + '0');
            }
            else
            {
                answer.push_back(sum + '0');
                over_ten = 0;
            }
        }
        
        if (over_ten == 1)
            answer.push_back(over_ten + '0');
    }
    
    reverse(answer.begin(),answer.end());
    
    return answer;
}
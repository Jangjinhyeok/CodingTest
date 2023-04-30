#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    int n = my_string.size();
    vector<string> suffix;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            suffix.push_back(my_string);
            continue;
        }

        reverse(my_string.begin(), my_string.end());
        my_string.pop_back();
        reverse(my_string.begin(), my_string.end());
        suffix.push_back(my_string);
    }

    for (auto i : suffix)
    {
        if (i == is_suffix)
            answer = 1;
    }
    
    //substr() 사용해서 좀 더 줄여볼 것
    return answer;
}
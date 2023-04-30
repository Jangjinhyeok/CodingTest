#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    int n = my_string.size();
    vector<string> prefix;
    
    if (my_string.size() < is_prefix.size())
        return answer;
    
    for (int i = 0; i < n; i++)
    {
        prefix.push_back(my_string);
        my_string.pop_back();
    }

    for (auto i : prefix)
        if (i == is_prefix)
        {
            answer = 1;
            break;
        }
    
    //return my_string.substr(0, is_prefix.size()) == is_prefix; 이거 한줄이면 되더라

    return answer;
}
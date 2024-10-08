#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    
    for(auto q : queries)
    {
        reverse(my_string.begin()+q[0],my_string.begin()+1+q[1]);
    }
    answer = my_string;
    return answer;
}
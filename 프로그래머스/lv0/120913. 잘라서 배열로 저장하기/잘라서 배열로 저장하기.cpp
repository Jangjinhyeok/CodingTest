#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    for(int i = 0; i <= my_str.size()/n; i++)
    {
        if(my_str.substr(0+i*n , n) != "")
            answer.push_back(my_str.substr(0 + i*n,n));
    }
    return answer;
}
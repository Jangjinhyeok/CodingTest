#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(auto i : array)
    {
        string s = to_string(i);
        for(auto j : s)
            if(j == '7')
                answer++;
    }
    return answer;
}
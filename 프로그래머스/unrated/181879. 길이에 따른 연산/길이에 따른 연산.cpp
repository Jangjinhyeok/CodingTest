#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    if(num_list.size() < 11)
    {
        answer = 1;
        for(auto i : num_list)
            answer = answer * i;
    }
    else
    {
        for(auto i : num_list)
            answer = answer + i;
    }
    return answer;
}
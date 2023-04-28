#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer;
    for(int i = start; i < end+1; i++)
        answer.push_back(i);
    return answer;
}
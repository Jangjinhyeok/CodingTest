#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    sort(num_list.begin(),num_list.end());
    num_list.erase(num_list.begin(),num_list.begin()+5);
    answer = num_list;
    return answer;
}
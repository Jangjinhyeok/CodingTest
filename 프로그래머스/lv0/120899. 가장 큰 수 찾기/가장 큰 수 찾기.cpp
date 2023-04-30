#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max_num = array[0];
    int max_num_idx = 0;
    for(int i = 1; i < array.size(); i++)
    {
        if(max_num < array[i])
        {
            max_num = array[i];
            max_num_idx = i;
        }
    }
    answer.push_back(max_num);
    answer.push_back(max_num_idx);
    //algorithm에 원하는 원소의 인덱스를 알려주는 distance(arr.begin(), num) 함수가 있음
    return answer;
}
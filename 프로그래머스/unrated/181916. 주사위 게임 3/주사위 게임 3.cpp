#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> num_list = { a,b,c,d };
    vector<int> same_list;
    int same_count = 0;
    
    for (auto i : num_list)
    {
        same_count = 0;
        for (auto j : num_list)
        {
            if (i == j)
                same_count++;
        }
        same_list.emplace_back(same_count);
    }

    int max_idx = max_element(same_list.begin(), same_list.end()) - same_list.begin();
    int min_idx = min_element(same_list.begin(), same_list.end()) - same_list.begin();
    
    if (*max_element(same_list.begin(), same_list.end()) == 4)
        answer = a * 1111;
    else if (*max_element(same_list.begin(), same_list.end()) == 3)
        answer = (10 * num_list[max_idx] + num_list[min_idx]) * (10 * num_list[max_idx] + num_list[min_idx]);

    else if (*max_element(same_list.begin(), same_list.end()) == 2)
    {
        int temp = 1;
        for (int i = 0; i < same_list.size(); i++)
        {
            if (same_list[i] == 1)
            {
                temp *= num_list[i];
            }
        }

        if (temp != 1)
            answer = temp;
        else
        {
            max_idx = max_element(num_list.begin(),num_list.end()) - num_list.begin();
            min_idx = min_element(num_list.begin(), num_list.end()) - num_list.begin();
            answer = (num_list[max_idx] + num_list[min_idx]) * abs(num_list[max_idx] - num_list[min_idx]);
        }
    }

    else
        answer = *min_element(num_list.begin(), num_list.end());
    return answer;
}
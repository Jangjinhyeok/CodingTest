#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    int rate = emergency.size();
    for(int i = 0; i < emergency.size(); i++)
    {
        int temp = emergency[i];
        for(int j = 0; j < emergency.size(); j++)
        {
            if(temp > emergency[j])
                rate--;
        }
        answer.push_back(rate);
        rate = emergency.size();
    }

    return answer;
}
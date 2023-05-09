#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    int i = 0;
    while(1)
    {
        if(pow(2,i) < arr.size())
            i++;
        else if(pow(2,i) == arr.size())
            break;
        else
        {
            for(int l = arr.size(); l < pow(2,i); l++)
            {
                answer.emplace_back(0);
            }
            break;
        }
    }
    return answer;
}
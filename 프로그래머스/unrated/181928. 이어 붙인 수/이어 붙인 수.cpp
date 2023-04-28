#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    vector<int> odd;
    vector<int> even;
    for(auto i : num_list)
    {
        if(i%2 != 0)
            odd.insert(odd.begin(),i);
        else
            even.insert(even.begin(),i);
    }
    
    for(int i = 0; i < odd.size(); i++)
        answer = answer + (odd[i] * pow(10,i));
    for(int i = 0; i < even.size(); i++)
        answer = answer + (even[i] * pow(10,i));
    return answer;
}
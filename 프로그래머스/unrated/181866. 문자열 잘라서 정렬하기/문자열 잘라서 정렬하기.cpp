#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp;
    for(auto i : myString)
    {
        if(i == 'x' && !temp.empty())
        {
            answer.push_back(temp);
            temp.clear();          
        }
        else if (i != 'x')
            temp.push_back(i);
    }
    if(!temp.empty())
        answer.push_back(temp);
    
    sort(answer.begin(),answer.end());
    return answer;
}
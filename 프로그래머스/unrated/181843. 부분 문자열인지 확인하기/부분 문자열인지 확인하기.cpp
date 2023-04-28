#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    /*
    if (my_string.size() < target.size())
        return answer = 0;
    
    for(int i = 0; i <= my_string.size()-target.size(); i++)
    {
        for(int j = 0; j < target.size(); j++)
        {
            if(my_string[i+j] != target[j])
                break;
            else if(j == target.size()-1 && my_string[i+j] == target[j])
                answer = 1;
        }
        if(answer != 1 && i == my_string.size()-target.size())
            answer = 0;
        else if(answer == 1)
            break;
    }
    */
    
    //string.find()이용한 답
    if(my_string.find(target) != string::npos) answer = 1;
    else answer = 0;
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp;
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] != ' ')
            temp.push_back(my_string[i]);
        if(my_string[i] == ' ' || i == my_string.size()-1)
        {
            answer.push_back(temp);   
            temp.clear();
        }
    }
    return answer;
}
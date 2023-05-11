#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    
    for(auto data : db)
    {
        if(data[0] != id_pw[0] && data == db.back())
            answer = "fail";
        else if(data[0] == id_pw[0])
        {
            if(data[1] == id_pw[1])
            {
                answer = "login";
                break;
            }
            else
            {
                answer = "wrong pw";
                break;
            }
        }
    }
    return answer;
}
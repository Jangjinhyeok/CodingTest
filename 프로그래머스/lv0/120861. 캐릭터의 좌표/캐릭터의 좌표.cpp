#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0,0};
    board[0] /= 2;
    board[1] /= 2;
    for(auto k : keyinput)
    {
        if(k[0] == 'u' && answer[1] != board[1])
            answer[1]++;
        else if(k[0] == 'd' && answer[1] != -board[1])
            answer[1]--;
        else if(k[0] == 'r' && answer[0] != board[0])
            answer[0]++;
        else if(k[0] == 'l' && answer[0] != -board[0])
            answer[0]--;
    }
    
    return answer;
}
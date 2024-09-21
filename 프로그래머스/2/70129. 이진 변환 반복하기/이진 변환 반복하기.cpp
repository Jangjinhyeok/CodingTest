#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    stack<int> stack;
    string temp;
    int cnt = 0;
    int terminate = 0;
    int oneCnt = 0;
    while(s != "1")
    {
        //사라지는 0의 개수와 0을 지운 string만들기
        for(char c : s)
        {
            if(c == '0')
                terminate++;
            else
                temp.push_back('1');
        }
        
        //0을 지운 string의 size로 이진법을 위해 stack에 넣기
        int c = temp.size();
        while(c != 0)
        {
            if(c % 2 == 1)
                stack.push(1);
            else
                stack.push(0);
            c /= 2;
        }
        
        //s를 초기화 후 새로 넣기
        s = "";
        while(!stack.empty())
        {
            s.push_back(stack.top() + '0');
            stack.pop();
        }
        
        temp = "";
        cnt++;
    }
    
    answer.push_back(cnt);
    answer.push_back(terminate);
    
    return answer;
}
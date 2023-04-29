#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string temp;
    for(auto i : myString)
    {
        if(i == 'A')
            temp.push_back('B');
        else
            temp.push_back('A');
    }
    
    if(temp.find(pat) != string::npos)
        answer = 1;
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    //algorithm 클래스 include 후에 answer = reverse(my_string.begin(),my_string.end())
    /*for(int i = my_string.size()-1; i >= 0; i--)
        answer += my_string[i];*/
    reverse(my_string.begin(),my_string.end());
    return my_string;
}
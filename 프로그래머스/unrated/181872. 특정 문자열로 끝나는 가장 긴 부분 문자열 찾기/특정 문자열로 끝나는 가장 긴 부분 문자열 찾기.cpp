#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    string r_str = myString;
    string r_pat = pat;
    reverse(r_str.begin(),r_str.end());
    reverse(r_pat.begin(),r_pat.end());
    
    int temp = r_str.find(r_pat);
    answer = myString.substr(0,myString.size()-temp);
    return answer;
}
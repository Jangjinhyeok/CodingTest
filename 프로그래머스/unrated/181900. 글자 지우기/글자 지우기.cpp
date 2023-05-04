#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(),indices.end());
    
    int cnt = 0;
    for(auto i : indices)
    {
        my_string.erase(i - cnt,1);
        cnt++;
    }
    
    return my_string;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int min_x = dots[0][0];
    int max_x = dots[0][0];
    int min_y = dots[0][1];
    int max_y = dots[0][1];
    
    for(int i = 0; i < dots.size(); i++)
    {
        if(min_x != min(min_x,dots[i][0]))
            min_x = dots[i][0];
        if(max_x != max(max_x,dots[i][0]))
            max_x = dots[i][0];
        if(min_y != min(min_y,dots[i][1]))
            min_y = dots[i][1];
        if(max_y != max(max_y,dots[i][1]))
            max_y = dots[i][1];
    }
    
    answer = (max_x - min_x) * (max_y - min_y);
    return answer;
}
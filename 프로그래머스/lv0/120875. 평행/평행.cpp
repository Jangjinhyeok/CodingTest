#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    float temp1 = 0;
    float temp2 = 0;
    
    for(int i = 0; i < 3; i++)
    {
        if(i == 0)
        {
            temp1 = (dots[1][1] - dots[0][1]) / (dots[1][0] - dots[0][0]) + (dots[1][1] - dots[0][1]) % (dots[1][0] - dots[0][0]);
            temp2 = (dots[3][1] - dots[2][1]) / (dots[3][0] - dots[2][0]) + (dots[3][1] - dots[2][1]) % (dots[3][0] - dots[2][0]);
            
            temp1 = abs(temp1);
            temp2 = abs(temp2);
            
            if(temp1 == temp2)
                return answer = 1;
        }
        
        else if (i == 1)
        {
            temp1 = (dots[2][1] - dots[0][1]) / (dots[2][0] - dots[0][0]) + (dots[2][1] - dots[0][1]) % (dots[2][0] - dots[0][0]);
            temp2 = (dots[3][1] - dots[1][1]) / (dots[3][0] - dots[1][0]) + (dots[3][1] - dots[1][1]) % (dots[3][0] - dots[1][0]);
            
            temp1 = abs(temp1);
            temp2 = abs(temp2);
            
            if(temp1 == temp2)
                return answer = 1;
        }
        
        else if (i == 2)
        {
            temp1 = (dots[3][1] - dots[0][1]) / (dots[3][0] - dots[0][0]) + (dots[3][1] - dots[0][1]) % (dots[3][0] - dots[0][0]);
            temp2 = ((dots[2][1] - dots[1][1]) / (dots[2][0] - dots[1][0])) + ((dots[2][1] - dots[1][1]) % (dots[2][0] - dots[1][0]));
            
            temp1 = abs(temp1);
            temp2 = abs(temp2);
            
        }
    }

    return answer;
}
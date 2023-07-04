#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    /*
    int answer = -1;
    if (A == B)
        return answer = 0;

    string temp = A;
    string temp2 = temp;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A.size(); j++)
        {
            if (j == 0)
            {
                temp[j] = temp2.back();
                continue;
            }

            temp[j] = temp2[j-1];
        }
        
        if (temp == B)
        {
            answer = i+1;
            break;
        }
        temp2 = temp;
    }
    */
    
    //참고로 rotate도 있음
    
    //미친 정답
    B += B;
    int answer = B.find(A);
    
    return answer;
}
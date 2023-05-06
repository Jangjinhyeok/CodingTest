#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int cnt = 0;
    bool is_changed = true;

    while (is_changed)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (i == 0)
                is_changed = false;
            if (arr[i] >= 50 && arr[i] % 2 == 0)
            {
                arr[i] = arr[i] / 2;
                is_changed = true;
            }
            else if (arr[i] <= 50 && arr[i] % 2 != 0)
            {
                arr[i] = arr[i] * 2 + 1;
                is_changed = true;
            }
        }
        cnt++;
    }


    answer = cnt - 1;
    
    return answer;
}
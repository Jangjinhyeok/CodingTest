#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    /*
    vector<int> arr;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) arr.push_back(i);
    
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = i; j < arr.size()-i; j++)
        {
            if(arr[i] == arr[j]) continue;
            else if (arr[i] * arr[j] == n) answer++;
        }
    }

    reverse(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size()-i; j++)
            if (arr[i] * arr[j] == n) answer++;
    }
    */
    // 순서쌍의 개수는 n을 나눌 수 있는 수의 개수와 같음 그러니 다음과 같이 코드 수정
    for (int i = 1; i <= n; i++)
        if (n % i == 0) answer++;

    return answer;
}
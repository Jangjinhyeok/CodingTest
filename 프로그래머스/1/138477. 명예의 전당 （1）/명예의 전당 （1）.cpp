#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> glory;

    for (int i = 0; i < score.size(); i++)
    {
        if (i < k)
        {
            glory.push_back(score[i]);
            sort(glory.begin(), glory.end());
            answer.push_back(glory.front());
        }
        else
        {
            for (int j = k-1; j >= 0; j--)
            {
                if (glory[j] <= score[i])
                {
                    for (int l = 0; l <= j; l++)
                    {
                        if (l != j)
                            glory[l] = glory[l + 1];
                        else
                            glory[l] = score[i];
                    }
                    break;
                }
            }
            answer.push_back(glory.front());
        }
    }
    return answer;
}
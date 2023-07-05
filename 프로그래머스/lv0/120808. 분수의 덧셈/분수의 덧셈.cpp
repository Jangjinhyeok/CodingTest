#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;
    
    vector<int> numer_measure;
    vector<int> denom_measure;

    for (int i = 1; i <= numer; i++)
        if (numer % i == 0)
            numer_measure.push_back(i);

    for (int i = 1; i <= denom; i++)
        if (denom % i == 0)
            denom_measure.push_back(i);

    int n = 0;

    for (auto i : numer_measure)
    {
        for (auto j : denom_measure)
        {
            if (i == j && i > n)
                n = i;
        }
    }

    numer /= n;
    denom /= n;

    answer.push_back(numer);
    answer.push_back(denom);
    return answer;
}
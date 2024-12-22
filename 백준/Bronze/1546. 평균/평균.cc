#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    
    vector<double> scores(N);
    
    for(int i = 0; i < N; i++) 
    {
        cin >> scores[i];
    }
    
    double maxScore = *max_element(scores.begin(), scores.end());
    double sum = 0;
    for(int i = 0; i < N; i++) 
    {
        scores[i] = (scores[i] / maxScore) * 100;
        sum += scores[i];
    }
    
    double newAverage = sum / N;
    cout << fixed;
    cout.precision(6);
    cout << newAverage << endl;
    
    return 0;
}
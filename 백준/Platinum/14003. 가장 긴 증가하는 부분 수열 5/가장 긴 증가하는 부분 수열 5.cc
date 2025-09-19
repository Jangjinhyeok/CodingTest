#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // lis[k] : 길이가 (k+1)인 증가 부분수열의 마지막 값(가장 작은 꼬리값)
    vector<long long> lis;
    lis.reserve(n);

    // pos[k] : 길이가 (k+1)인 수열을 만들 때 마지막으로 사용된 '원배열 인덱스'
    vector<int> pos;
    pos.reserve(n);

    // parent[i] : a[i]를 수열의 끝으로 썼을 때, 그 직전 원소의 인덱스(복원용)
    vector<int> parent(n, -1);

    for (int i = 0; i < n; i++)
    {
        // 현재 값 a[i]가 들어갈 자리 (strictly increasing → lower_bound)
        int k = lower_bound(lis.begin(), lis.end(), a[i]) - lis.begin();

        if (k == (int)lis.size())
        {
            lis.push_back(a[i]);
            pos.push_back(i);
        }
        else
        {
            lis[k] = a[i];
            pos[k] = i;
        }

        // 직전 원소 링크(길이 1이면 직전 없음)
        if (k > 0) parent[i] = pos[k - 1];
    }

    int L = (int)lis.size();
    cout << L << '\n';

    // 실제 수열 복원
    vector<long long> answer;
    answer.reserve(L);
    int idx = pos[L - 1];
    while (idx != -1)
    {
        answer.push_back(a[idx]);
        idx = parent[idx];
    }
    reverse(answer.begin(), answer.end());

    for (int i = 0; i < L; i++)
    {
        if (i) cout << ' ';
        cout << answer[i];
    }
    cout << '\n';
    return 0;
}
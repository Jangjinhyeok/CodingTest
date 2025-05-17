#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int max_discount = 0;   
    if (n >= 5) max_discount = max(max_discount, 500);
    if (n >= 10) max_discount = max(max_discount, (int)(p * 0.1));
    if (n >= 15) max_discount = max(max_discount, 2000);
    if (n >= 20) max_discount = max(max_discount, (int)(p * 0.25));

    int final_price = max(0, p - max_discount);
    cout << final_price;
    return 0;
}
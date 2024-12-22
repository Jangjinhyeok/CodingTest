#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string num) 
{
    int left = 0;
    int right = num.length() - 1;
    
    while (left < right) 
    {
        if (num[left] != num[right])
            return false;
        
        left++;
        right--;
    }
    return true;
}

int main() 
{
    string num;
    
    while (true) 
    {
        cin >> num;
        if (num == "0") 
            break;
        
        if (isPalindrome(num)) 
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        
    }
    
    return 0;
}
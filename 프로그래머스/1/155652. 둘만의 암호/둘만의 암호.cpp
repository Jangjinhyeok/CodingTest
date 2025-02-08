#include <bits/stdc++.h>

using namespace std;

string solution(string s, string skip, int index) {
    unordered_set<char> skipSet(skip.begin(), skip.end());
    string result;

    for (char c : s) 
    {
        int count = 0;
        char current = c;

        while (count < index) 
        {
            current++;
            if (current > 'z') current = 'a';
            if (skipSet.find(current) == skipSet.end()) count++;
        }
        result += current;
    }
    return result;
}
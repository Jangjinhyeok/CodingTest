#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    string changedStr;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] > 64 && str[i] < 91)
            changedStr.push_back(tolower(str[i]));
        else
            changedStr.push_back(toupper(str[i]));
    }
    cout<<changedStr<<endl;
    return 0;
}
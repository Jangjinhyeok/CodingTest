#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;   

    string temp;
    string n_str;
    for(int i = 0; i < numbers.size(); i++)
    {
        temp += numbers[i];
        temp += numbers[i+1];
        
        if(temp == "ze")
        {
            n_str.push_back('0');
            i += 3;
        }
        else if(temp == "on")
        {
            n_str.push_back('1');
            i += 2;
        }
        else if(temp == "tw")
        {
            n_str.push_back('2');
            i += 2;
        }
        else if(temp == "th")
        {
            n_str.push_back('3');
            i += 4;
        }
        else if(temp == "fo")
        {
            n_str.push_back('4');
            i += 3;
        }
        else if(temp == "fi")
        {
            n_str.push_back('5');
            i += 3;
        }
        else if(temp == "si")
        {
            n_str.push_back('6');
            i += 2;
        }
        else if(temp == "se")
        {
            n_str.push_back('7');
            i += 4;
        }
        else if(temp == "ei")
        {
            n_str.push_back('8');
            i += 4;
        }
        else if(temp == "ni")
        {
            n_str.push_back('9');
            i += 3;
        }
            
        temp.clear();
    }
    
    return answer = stol(n_str);
}
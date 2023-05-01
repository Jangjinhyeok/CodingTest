#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string letter) {
    vector<vector<string>> morse = { 
    {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},{".","e"},{"..-.","f"},
    {"--.","g"},{"....","h"},{"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
    {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"},
    {"...","s"},{"-","t"},{"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
    {"-.--","y"},{"--..","z"}
    };
    
    string answer = "";
    string temp;
    
    for (int i = 0; i < letter.size(); i++)
    {
        if (letter[i] != ' ')
            temp.push_back(letter[i]);
        else if (letter[i] == ' ' && !temp.empty())
        {
            for (int j = 0; j < morse.size(); j++)
            {
                if (temp == morse[j][0])
                {
                    answer.push_back(morse[j][1][0]);
                    temp.clear();
                }
            }
        }
        if (i == letter.size() - 1 && !temp.empty())
        {
            for (int j = 0; j < morse.size(); j++)
            {
                if (temp == morse[j][0])
                {
                    answer.push_back(morse[j][1][0]);
                    temp.clear();
                }
            }
        }
            
    }
    return answer;
}
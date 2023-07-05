#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret = "";
    int mode = 0;

    for (int i = 0; i < code.size(); i++)
    {
        if (code[i] == '1')
        {
            mode = (mode == 1) ? 0 : 1;
            continue;
        }
        if (mode == 0)
        {
            if (i % 2 == 0)
                ret.push_back(code[i]);
        }
        else
        {   
            if (i % 2 != 0)
                ret.push_back(code[i]);
        }
    }

    if (ret.empty())
        ret += "EMPTY";
    return ret;
}
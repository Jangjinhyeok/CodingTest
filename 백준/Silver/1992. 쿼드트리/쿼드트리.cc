#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n;
vector<string> video;
string answer;
string quard(int y, int x, int size)
{
    if (size == 1)
        return string(1, video[y][x]);
    char temp = video[y][x];
    string str;
    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (temp != video[i][j])
            {
                str += '(';
                str += quard(y, x, size / 2);
                str += quard(y, x + size /2, size / 2);
                str += quard(y + size /2, x, size / 2);
                str += quard(y + size /2 , x + size /2, size / 2);
                str += ')';
                return str;
            }
        }
    }
    return string(1, video[y][x]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        video.push_back(temp);
    }
    
    answer = quard(0, 0, n);
    cout << answer;
    return 0;
}
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<vector<int>> map1;
    vector<vector<int>> map2;
    vector<int> binary;
    

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            if (pow(2, j) <= arr1[i])
            {
                binary.push_back(1);
                arr1[i] -= pow(2, j);
            }
            else
                binary.push_back(0);
        }

        map1.push_back(binary);
        binary.clear();
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            if (pow(2, j) <= arr2[i])
            {
                binary.push_back(1);
                arr2[i] -= pow(2, j);
            }
            else
                binary.push_back(0);
        }

        map2.push_back(binary);
        binary.clear();
    }

    for (int i = 0; i < n; i++)
    {
        string temp;

        for (int j = 0; j < n; j++)
        {
            if (map1[i][j] == 1 || map2[i][j] == 1)
                temp.push_back('#');
            else
                temp.push_back(' ');
        }
        answer.push_back(temp);
        temp.clear();
    }
    return answer;
}
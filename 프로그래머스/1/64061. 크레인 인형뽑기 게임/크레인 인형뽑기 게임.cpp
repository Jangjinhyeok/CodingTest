#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) 
{
    int answer = 0;
    stack<int> stackBoard[31];
    stack<int> getBoard;

    for (int i = board.size() - 1; i >= 0; i--)
    {
        vector<int> row = board[i];
        for (int j = row.size() - 1; j >= 0; j--)
        {
            if (row[j] != 0)
            {
                stackBoard[j].push(row[j]);
            }
        }   
    }

    for (int i : moves)
    {
        if (stackBoard[i - 1].empty())
            continue;

        int puppet = stackBoard[i - 1].top();
        stackBoard[i - 1].pop();


        if (!getBoard.empty())
        {
            if (getBoard.top() == puppet)
            {
                getBoard.pop();
                answer += 2;
                continue;

            }
        }

        getBoard.push(puppet);
    
    }
    
    return answer;
}
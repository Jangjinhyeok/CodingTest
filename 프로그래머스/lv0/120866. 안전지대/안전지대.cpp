#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    if(board.size() < 2)
    {
        if(board[0][0] == 1)
            return answer = 0;
        else
            return answer = 1;
    }
    for (int y = 0; y < board.size(); y++)
    {
        for (int x = 0; x < board.size(); x++)
        {
            if (board[y][x] == 1)
            {
                if (y == 0)
                {
                    if (x == 0)
                    {
                        if (board[y][x + 1] == 0)
                            board[y][x + 1] = 2;
                        if (board[y + 1][x] == 0)
                            board[y + 1][x] = 2;
                        if (board[y + 1][x + 1] == 0)
                            board[y + 1][x + 1] = 2;
                    }

                    else if (x == board.size()-1)
                    {
                        if (board[y][x - 1] == 0)
                            board[y][x - 1] = 2;
                        if (board[y + 1][x] == 0)
                            board[y + 1][x] = 2;
                        if (board[y + 1][x - 1] == 0)
                            board[y + 1][x - 1] = 2;
                    }

                    else
                    {
                        if (board[y][x - 1] == 0)
                            board[y][x - 1] = 2;
                        if (board[y][x + 1] == 0)
                            board[y][x + 1] = 2;
                        if (board[y + 1][x - 1] == 0)
                            board[y + 1][x - 1] = 2;
                        if (board[y + 1][x + 1] == 0)
                            board[y + 1][x + 1] = 2;
                        if (board[y + 1][x] == 0)
                            board[y + 1][x] = 2;
                    }
                }

                else if (y == board.size()-1)
                {
                    if (x == 0)
                    {
                        if (board[y][x + 1] == 0)
                            board[y][x + 1] = 2;
                        if (board[y - 1][x] == 0)
                            board[y - 1][x] = 2;
                        if (board[y - 1][x + 1] == 0)
                            board[y - 1][x + 1] = 2;
                    }

                    else if (x == board.size()-1)
                    {
                        if (board[y][x - 1] == 0)
                            board[y][x - 1] = 2;
                        if (board[y - 1][x] == 0)
                            board[y - 1][x] = 2;
                        if (board[y - 1][x - 1] == 0)
                            board[y - 1][x - 1] = 2;
                    }

                    else
                    {
                        if (board[y][x - 1] == 0)
                            board[y][x - 1] = 2;
                        if (board[y][x + 1] == 0)
                            board[y][x + 1] = 2;
                        if (board[y - 1][x - 1] == 0)
                            board[y - 1][x - 1] = 2;
                        if (board[y - 1][x + 1] == 0)
                            board[y - 1][x + 1] = 2;
                        if (board[y - 1][x] == 0)
                            board[y - 1][x] = 2;
                    }
                }

                else if(y > 0 && y < board.size())
                {
                    if (x == 0)
                    {
                        if (board[y - 1][x] == 0)
                            board[y - 1][x] = 2;
                        if (board[y - 1][x+1] == 0)
                            board[y - 1][x+1] = 2;
                        if (board[y][x+1] == 0)
                            board[y][x+1] = 2;
                        if (board[y + 1][x] == 0)
                            board[y + 1][x] = 2;
                        if (board[y + 1][x+1] == 0)
                            board[y + 1][x+1] = 2;
                    }
                    else if (x == board.size() - 1)
                    {
                        if (board[y - 1][x] == 0)
                            board[y - 1][x] = 2;
                        if (board[y - 1][x - 1] == 0)
                            board[y - 1][x - 1] = 2;
                        if (board[y][x - 1] == 0)
                            board[y][x - 1] = 2;
                        if (board[y + 1][x] == 0)
                            board[y + 1][x] = 2;
                        if (board[y + 1][x - 1] == 0)
                            board[y + 1][x - 1] = 2;
                    }
                    else
                    {
                        if (board[y - 1][x - 1] == 0)
                            board[y - 1][x - 1] = 2;
                        if (board[y - 1][x] == 0)
                            board[y - 1][x] = 2;
                        if (board[y - 1][x + 1] == 0)
                            board[y - 1][x + 1] = 2;

                        if (board[y][x - 1] == 0)
                            board[y][x - 1] = 2;
                        if (board[y][x + 1] == 0)
                            board[y][x + 1] = 2;

                        if (board[y + 1][x - 1] == 0)
                            board[y + 1][x - 1] = 2;
                        if (board[y + 1][x] == 0)
                            board[y + 1][x] = 2;
                        if (board[y + 1][x + 1] == 0)
                            board[y + 1][x + 1] = 2;
                    }
                }
            }
        }
    }
    
    for (auto y : board)
    {
        for (auto x : y)
            if (x == 0)
                answer++;
    }
    return answer;
}
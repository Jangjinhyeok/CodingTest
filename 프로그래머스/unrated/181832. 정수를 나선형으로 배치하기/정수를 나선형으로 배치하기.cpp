#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
	vector<int> temp;
	int number = 1;
	int col = 0;
	int row = n-1;
	int stack = 0;
	bool change = true;

	bool colChange = false;
	bool rowChange = true;

	for (int i = 0; i < n; i++)
		temp.emplace_back(0);
	for (int i = 0; i < n; i++)
		answer.emplace_back(temp);
	for (int i = 0; i < n; i++)
	{
		answer[0][i] = number;
		number++;
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			//row
			if (!change)
			{
				int k = 0;
				while (k < n - 1 - stack)
				{
					if (rowChange)
					{
						row--;
						answer[col][row] = number;
						number++;
						k++;
					}
					else
					{
						row++;
						answer[col][row] = number;
						number++;
						k++;
					}
				}
				rowChange = !rowChange;
				change = !change;
				stack++;
			}

			//col
			else
			{
				int k = 0;
				while (k < n - 1 - stack)
				{
					if (colChange)
					{
						col--;
						answer[col][row] = number;
						number++;
						k++;
					}
					else
					{
						col++;
						answer[col][row] = number;
						number++;
						k++;
					}
				}
				colChange = !colChange;
				change = !change;
			}
		}
	}
    return answer;
}
class Solution
{
    public:
        void gameOfLife(vector<vector < int>> &board)
        {

            int row = board.size();
            int col = board[0].size();
            vector<vector<int>> temp = board;

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {

                    int count = 0;
                    if (i > 0 && temp[i - 1][j] )
                    {
                        count++;
                    }
                    if (i + 1 < row && temp[i + 1][j] )
                    {
                        count++;
                    }
                    if (j > 0 && temp[i][j - 1] )
                    {
                        count++;
                    }
                    if (j + 1 < col && temp[i][j + 1] )
                    {
                        count++;
                    }

                    if (i > 0 && j + 1 < col && temp[i - 1][j + 1])
                    {
                        count++;
                    }

                    if (i > 0 && j > 0 && temp[i - 1][j - 1])
                    {
                        count++;
                    }
                    if (i + 1 < row && j > 0 && temp[i + 1][j - 1])
                    {
                        count++;
                    }
                    if (i + 1 < row && j + 1 < col && temp[i + 1][j + 1])
                    {
                        count++;
                    }

                    if (count < 2)
                    {
                        board[i][j] = 0;
                    }
                    else if (count > 3)
                    {
                        board[i][j] = 0;
                    }
                    else if (count == 3)
                    {
                        board[i][j] = 1;
                    }
                    // cout << count << " ";
                }
            }
        }
};
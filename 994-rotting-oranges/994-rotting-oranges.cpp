class Solution
{
    public:
        vector<int> dir = { -1,
            0,
            1,
            0,
            -1
        };
    int orangesRotting(vector<vector < int>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();

        int fresh = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {

                if (grid[i][j] == 2)
                {
                    q.push({ i,
                        j });
                }
                else if (grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }

        int ans = -1;

        while (!q.empty())
        {
            int sze = q.size();
            while (sze--)
            {
                pair<int, int> p = q.front();
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int r = p.first + dir[i];
                    int c = p.second + dir[i + 1];

                    if (r>=0 && r<n && c>=0 && c<m &&grid[r][c]==1)
                    {
                        grid[r][c] = 2;
                        q.push({r,c});


                        fresh--;
                    }
                }
            }
            ans++;
        }

        if (fresh > 0)
            return -1;
        if(ans == -1)
            return 0;
        return ans;
    }
};
class Solution
{
    public:
        vector<int> spiralOrder(vector<vector < int>> &matrix)
        {

            int n = matrix.size();
            int m = matrix[0].size();

            int top = 0;
            int bottom = n - 1;
            int right = m - 1;
            int left = 0;

            vector<int> v;
            int direction =1;

            while (top <= bottom && left <= right)
            {
                if (left <= right && direction == 1)
                {
                    for (int i = left; i <= right; i++)
                    {
                        v.push_back(matrix[top][i]);
                    }
                    top++;
                    direction =2;
                }

                if (top <= bottom && direction == 2)
                {
                    for (int i = top; i <= bottom; i++)
                    {
                        v.push_back(matrix[i][right]);
                    }
                    right--;
                    direction =3;
                }

                if (right >= left && direction == 3)
                {
                    for (int i = right; i >= left; i--)
                    {
                        v.push_back(matrix[bottom][i]);
                    }
                    bottom--;
                    direction = 4;
                }

                if (top <= bottom && direction ==4)
                {
                    for (int i = bottom; i >= top; i--)
                    {
                        v.push_back(matrix[i][left]);
                    }
                    left++;
                    direction =1;
                }
            }
            
            return v;
        }
};
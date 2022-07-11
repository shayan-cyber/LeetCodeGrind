class Solution
{
    public:

        int furthestBuilding(vector<int> &heights, int bricks, int ladders)
        {

            priority_queue<int, vector < int>, greater < int>> pq;
            int i = 0;
            int n = heights.size();

            while (i < n - 1 && pq.size()<ladders)
            {
                if (heights[i + 1] > heights[i])
                    pq.push(heights[i + 1] - heights[i]);

                i++;
            }

            while (i < n - 1)
            {
                if (heights[i + 1] - heights[i] > 0)
                {

                    if (!pq.empty() && pq.top() < heights[i + 1] - heights[i])
                    {
                        bricks = bricks - pq.top();
                        pq.pop();
                        pq.push(heights[i + 1] - heights[i]);
                    }
                    else
                    {
                        bricks = bricks - heights[i + 1] + heights[i];
                    }
                }
                if (bricks < 0)
                {
                    break;
                }
                i++;
            }

            return i;
        }
};
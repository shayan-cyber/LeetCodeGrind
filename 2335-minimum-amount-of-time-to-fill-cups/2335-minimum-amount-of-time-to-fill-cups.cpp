class Solution
{
    public:
        int fillCups(vector<int> &amount)
        {
            priority_queue<int> pq;

            pq.push(amount[0]);
            pq.push(amount[1]);
            pq.push(amount[2]);
            int res = 0;
            while (pq.top() != 0)
            {
                int t1 = pq.top();
                pq.pop();
                int t2 = pq.top();
                pq.pop();

                pq.push(t1 - 1);
                pq.push(t2 - 1);

                res++;
            }

            return res;
        }
};
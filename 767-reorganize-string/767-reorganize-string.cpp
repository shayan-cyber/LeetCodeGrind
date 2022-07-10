class Solution
{
    public:
        string reorganizeString(string s)
        {
            unordered_map<char, int> mp;

            for (auto S: s)
            {
                mp[S]++;
            }

            priority_queue<pair<int, char>> pq;

            for (auto it: mp)
            {
                pq.push({ it.second,
                    it.first });
            }

            string res = "";
            while (pq.size() > 1)
            {

                pair<int, char> t1 = pq.top();
                pq.pop();
                pair<int, char> t2 = pq.top();
                pq.pop();

                res.push_back(t1.second);
                res.push_back(t2.second);
                t1.first--;
                t2.first--;

                if (t1.first > 0)
                {
                    pq.push(t1);
                }
                if (t2.first > 0)
                {
                    pq.push(t2);
                }
            }
            if (!pq.empty())
            {
                if (pq.top().first > 1)
                {
                    return "";
                }
                else
                {
                    res.push_back(pq.top().second);
                }
            }
            return res;
        }
};
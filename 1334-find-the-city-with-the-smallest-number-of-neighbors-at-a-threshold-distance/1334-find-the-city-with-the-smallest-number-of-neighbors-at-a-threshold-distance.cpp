class Solution
{
    public:
        vector<pair<int, int>> res;

    bool static cmp(const pair<int, int> p1, const pair<int, int> p2)
    {
        if (p1.first != p2.first)
            return p1.first < p2.first;

        return p1.second > p2.second;
    }

    void djk(int s, vector<pair<int, int>> adj[], int n, int thresh)
    {

        vector<int> dis(n + 1, INT_MAX);

        priority_queue<pair<int, int>, vector< pair<int, int>>, greater<pair<int, int>>> pq;

        dis[s] = 0;
        pq.push({ 0,
            s });
        while (!pq.empty())
        {

            int prev = pq.top().second;
            int prevDist = pq.top().first;
            pq.pop();

            for (auto it: adj[prev])
            {
                int next = it.first;
                int nextDist = it.second;
                if (dis[next] > nextDist + dis[prev])
                {
                    dis[next] = nextDist + dis[prev];
                    pq.push({ dis[next],
                        next });
                }
            }
        }

        int cnt = 0;

       for(int i=0; i<n; i++){
           if(i!= s && dis[i] <= thresh)
               cnt++;
       }
        res.push_back({ cnt,
            s });
    }

    int findTheCity(int n, vector<vector < int>> &edges, int distanceThreshold)
    {

       	//          make adj list

        vector<pair<int, int>> adj[n];
        for (auto it: edges)
        {

            adj[it[0]].push_back({ it[1],
                it[2] });
            adj[it[1]].push_back({ it[0],
                it[2] });
        }

        for (int i = 0; i < n; i++)
        {
            djk(i, adj, n, distanceThreshold);
        }

        sort(res.begin(), res.end(), cmp);

        return res[0].second;
    }
};
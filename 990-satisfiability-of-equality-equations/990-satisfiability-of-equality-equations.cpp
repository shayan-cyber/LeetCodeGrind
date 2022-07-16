class Solution
{
    public:

       	//  disjoint set

        int parent[27];
    int rank[27];

    void makeset()
    {

        for (int i = 0; i < 27; i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int findpar(int node)
    {

        if (parent[node] == node)
            return node;
        return parent[node] = findpar(parent[node]);
    }

    void uni(int u, int v)
    {

        u = findpar(u);
        v = findpar(v);

        if (rank[u] > rank[v])
        {
            parent[v] = u;
        }
        else if (rank[u] < rank[v])
        {
            parent[u] = v;
        }
        else
        {
            parent[u] = v;
            rank[v]++;
        }
    }

    bool equationsPossible(vector<string> &e)
    {

        int n = e.size();
        makeset();
        for (int i = 0; i < n; i++)
        {
            if (e[i][1] == '=')
            {
                int cell1 = e[i][0] - 'a';

                int cell2 = e[i][3] - 'a';
                cout << cell1 << cell2;
                uni(cell1, cell2);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (e[i][1] == '!')
            {
                int cell1 = e[i][0] - 'a';
                int cell2 = e[i][3] - 'a';

                if (findpar(cell1) == findpar(cell2))
                    return false;
            }
        }
        return true;
    }
};
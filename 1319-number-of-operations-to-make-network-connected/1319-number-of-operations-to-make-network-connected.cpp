class Solution
{
    public:

        vector<int> parents;
    vector<int> rank;

    int count = 0;
    void makeset()
    {
        for (int i = 0; i < parents.size(); i++)
        {
            parents[i] = i;
            rank[i] = 0;
        }
    }

    int findpar(int node)
    {

        if (parents[node] == node)
            return node;

        return parents[node] = findpar(parents[node]);
    }

    void uni(int s, int d)
    {

        s = findpar(s);
        d = findpar(d);

        if (s != d)
        {
            if (rank[s] > rank[d])
            {
                parents[d] = s;
            }
            else if (rank[s] < rank[d])
            {
                parents[s] = d;
            }
            else
            {
                parents[s] = d;

                rank[d]++;
            }
        }else{
            count ++;
        }
    }

    int makeConnected(int n, vector<vector < int>> &c) {
        
        parents = vector<int> (n);
        rank = vector<int> (n);
        
        
        makeset();
        for(int i=0; i<c.size(); i++){
            uni(c[i][0], c[i][1]);
            
            
        }
        
        
        
        set <int> groups;
        for(int i=0; i<c.size(); i++){
            
            if(groups.find(findpar(c[i][0])) == groups.end() )
                groups.insert(findpar(c[i][0]));
            if(groups.find(findpar(c[i][1])) == groups.end() )
                groups.insert(findpar(c[i][1]));
            
            
            
            
            
        }
        
        for(int i=0; i<n; i++){
            if(parents[i] == i){
                groups.insert(i);
            }
        }
        cout<<groups.size();
        if(count < groups.size()-1)
            return -1;
        return groups.size()-1;
        
        
        
        
        
    }
};
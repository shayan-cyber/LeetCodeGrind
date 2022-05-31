class Solution {
public:
    static bool comp(vector<int> &a, vector <int> &b){
            return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        
        sort(intervals.begin(), intervals.end(), comp);
        
        int n = intervals.size();
        vector <vector<int>> v;
        
        int res =0;
        for(int i=1; i<n; i++){
            if(intervals[res][1] >= intervals[i][0]){
                intervals[res][1] = max(intervals[res][1], intervals[i][1]);
                intervals[res][0] = min(intervals[res][0], intervals[i][0]);
            }else{
                res++;
                intervals[res] = intervals[i];
            }
        }
        
        
        
        for(int i=0; i<=res; i++){
            v.push_back(intervals[i]);
        }

        return v;
        
        
    }
};
class Solution
{
    public:
        int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
        {
            long long int mod = 1000000007;

            int max_h = INT_MIN;
            int max_w = INT_MIN;
            
            //sort the arrays because largets indexed cuts will be furthers cut down by smaller indexed cut and will make smaller cut
            sort(horizontalCuts.begin(), horizontalCuts.end());
            sort(verticalCuts.begin(), verticalCuts.end());
            
            
            //largest height of cut initially will be horizontalCuts[0] or h-horizontalCuts[n-1]
            max_h = max(horizontalCuts[0], h - horizontalCuts.back());
            
            
            // largest width of cut initially will be verticalCuts[0] or w - verticalCuts[n-1]
            max_w = max(verticalCuts[0], w - verticalCuts.back());
            
            
            
            for (int i = 1; i < horizontalCuts.size(); i++)
            {
                max_h = max(max_h, horizontalCuts[i] - horizontalCuts[i - 1]);
            }
            
            
            for (int i = 1; i < verticalCuts.size(); i++)
            {
                max_w = max(max_w, verticalCuts[i] - verticalCuts[i - 1]);
            }
            
           
            return  (int)((long)max_h * max_w % mod);
        }
};
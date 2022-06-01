class Solution
{
    public:
        int maxArea(vector<int> &height)
        {

            int n = height.size();
            int i=0;
            int j=n-1;
            int water =0;
            
            while(i<j){
                int width = j-i;
                int minH = min(height[i],height[j]);
                water = max(water, width*minH);
                
                if(height[i]<height[j]){
                    i++;
                }else if(height[i]>height[j]){
                    j--;
                }else{
                    i++;
                    j--;
                }
            }
            
            
            return water;

        }
};
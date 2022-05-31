class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {

            int n = nums.size();
            sort(nums.begin(), nums.end());
            set<vector < int>> s;
            vector<vector < int>> v;

            for (int i = n - 1; i >= 0; i--)
            {
                int temp = -nums[i];
                int j = 0;
                int k = i - 1;
                while (j < k)
                {

                    if (nums[j] + nums[k] == temp)
                    {
                        vector<int> p = { nums[i],
                            nums[j],
                            nums[k]
                        };
                        sort(p.begin(), p.end());

                        if (s.find(p) == s.end())
                        {
                            s.insert(p);
                            v.push_back(p);
                        }

                        if(j+1<n){
                            if(nums[j+1] + nums[k] >= temp  ){
                            k--;
                            }else if(nums[j+1]+ nums[k]<temp ){
                                j++;
                            }
                            
                        }
                        
                        if(k-1>=0){
                            if(nums[j] + nums[k-1] >= temp ){
                            k--;
                        }else if(nums[j]+ nums[k-1]<temp ){
                            j++;
                        }
                        }
                        if(k-1<0 && j+1 >=n){
                            break;
                        }
                        
                    }
                    else if (nums[j] + nums[k] > temp)
                    {
                        k--;
                    }
                    else
                    {
                        j++;
                    }
                }
            }

            return v;
        }
};
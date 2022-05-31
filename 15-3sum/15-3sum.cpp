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

                        v.push_back(p);
                        while (j < k && nums[j + 1] == nums[j])
                            j++;
                        while (j <k && nums[k - 1] == nums[k])
                            k--;
                        j++;
                        k--;
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
                while (i -1 >=0 && nums[i] == nums[i - 1])
                    i--;
            }

            return v;
        }
};
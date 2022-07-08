class Solution
{
    public:
        int findpivot(vector<int> &nums)
        {

            for (int i = 1; i < nums.size(); i++)
            {

                if (nums[i - 1] > nums[i])
                {
                    return i;
                }
            }

            return -1;
        }

    int search(vector<int> &nums, int target)
    {
        if(nums.size() ==1){
            if(nums[0] == target)
                return 0;
            else{
                return -1;
            }
        }
        int pivot = findpivot(nums);
        cout<<pivot<<" ";

        if (pivot == -1)
        {
           	//             normal find;
            int s =0;
            int e =nums.size()-1;
            
            while(s<=e){
                int mid = (s+e)/2;
                
                if(nums[mid] == target){
                    return mid;
                    
                }else if(nums[mid] < target){
                    s = mid+1;
                }else{
                    e = mid-1;
                }
                
            }
        }
        else
        {
           	//             left half find

            int s = 0;
            int e = pivot - 1;
            if (e == -1)
            {
                if (nums[s] == target)
                    return s;
            }
            else
            {
                while (s <= e)
                {
                    int mid = (s + e) / 2;
                    if (nums[mid] == target)
                    {
                        return mid;
                    }
                    else if (nums[mid] > target)
                    {
                        e = mid - 1;
                    }
                    else
                    {
                        s = mid + 1;
                    }
                }
            }

           	//             right half find

            s = pivot;
            e = nums.size()-1;
            
            while (s <= e)
                {
                    int mid = (s + e) / 2;
                    if (nums[mid] == target)
                    {
                        return mid;
                    }
                    else if (nums[mid] > target)
                    {
                        e = mid - 1;
                    }
                    else
                    {
                        s = mid + 1;
                    }
                }
            
        }
        return -1;
    }
};
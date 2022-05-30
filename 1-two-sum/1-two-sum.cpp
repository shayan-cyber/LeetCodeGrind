class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
    
            vector<int> ans;
            
            
//             hashmap approach
            
//             unordered_map <int,int> mp;
            
            
//             for(int i=0; i<nums.size(); i++){
//                 if(mp.find(target - nums[i]) != mp.end()){
//                    ans.push_back(i);
//                    ans.push_back(mp[target-nums[i]]);
//                     break;
//                 }else{
//                     mp[nums[i]] = i;
//                 }
//             }
            
            
            
//             two pointer approach
            
            
            vector <pair <int,int>> v;
            
            
            for(int i=0; i<nums.size(); i++){
                v.push_back(make_pair(nums[i], i));
            }
            
            sort(v.begin(), v.end());
            
            
            int s= 0;
            int e = nums.size()-1;
            
            while(s<e){
                if(v[s].first + v[e].first == target){
                    // ans.push_back(v[s].second);
                    // ans.push_back(v[e].second);
                    // break;
                    return {v[s].second, v[e].second};
                        
                }else if(v[s].first + v[e].first > target){
                    e--;
                }else{
                    s++;
                }
            }
            
            
            return {-1,-1};
            
            
            
            return ans;
            
            
        }
};
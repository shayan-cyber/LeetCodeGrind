First Approach (cluttered ,not ideal):
1.we make set of all elements of nums and we'll make temp array of nums.
2. we modify array with nums[i]-k.
3.we'll iterate through nums and find nums[i] in the set and push the pair of temp[i] and nums[i] to the the check set to get rid of duplicates and make count++.
4.if k==0 we'll count no of all duplicate elements.
5.main logic is nums[i] - nums[j] =k then nums[i] -k = nums[j].
​
​
second approach (similar but easier)
1. we'll make hashmap of each element of nums
2. we'll iterate through the map to find (it+ k) in the map and if we find count++.
3. if k==0 we'll se which elements in map has frequency more than one and count++.
we'll make left arr and right arr with multiplication of previous elements with current one.
​
eg:
nums = [1, 2 ,3, 4]
left = [1, 2, 6, 24] -- from left side
right = [24, 24, 12, 4] --- from right side
​
ans[0] = multiplication of all elements except itself  (nums[0]) = right[1]
ans [n-1] =  multiplication of all elements except itself  (nums[n-1]) = left[n-2]
​
for others we'll iterate from i =1 to i<n-1;
nums[i] = left[i-1] * right[i+1]  (because left[i-1] will give multiplication till the ith element from left side and right[i+1] will give multiplication till ith element from right side)
Approach :
​
first we'll find array with prefix sum.
​
we'll iterate through the array if prefix[i] == k we'll add 1 to count .
find prefix[i] -k in the map that is
prefix[i] - x = k
=> prefix[i] -k = x
​
x is a prefix sum of one of the already visited elements if we find x then we'll add 1 to count.
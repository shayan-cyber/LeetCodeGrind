Approach:
if some subarray from start has remainder x and another subarray from start has remainder x. then there will a sub array between  the two subarrays cause .
​
for eg :
4 5 0 -2 -3 1 , k =5
4 5 0 -- remainder 4 -- totalsum1=> 5n  + 4
4 5 0  -2 -3 --- remainder 4-- totalsum2 => 5m + 4
totalsum1 - totalsum2 = 5(n-m)= 5a
so 0, -2, -3 --- will be one sub array
​
​
so we'll make unordered map for all the remainder of currSum if we find same remainder again we'll add the frequency of that remainder to the count variable.
​
(NOTE: for negative modulo we'll add k to the modulo cause remainder can't be negative)
(NOTE: for 0 remainder we'll add 1 first on the map cause 0 remainder means already the total sub array sum is divisible by k )
​
​
https://www.youtube.com/watch?v=QM0klnvTQzk&t=478s
​
​
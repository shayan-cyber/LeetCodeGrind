here we have to minimize capacity of ship..
so if we want to ship all packages at once in one day then capacity will be sum of weights and that will be max capacity possible. -> days min
so if we send one package at each day then capacity must be equal to max of weights which will be the min capacity possible. -> days max
​
so if we do binary search in that range and find possible capacity which fulfill the max no of days allowed then minimize that capacity by binary search itself we'll get answer.
​
​
https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/discuss/1576116/C%2B%2Bor-Binary-Search-on-Answers-(A-very-imp.-Topic)or-Easy-explanation
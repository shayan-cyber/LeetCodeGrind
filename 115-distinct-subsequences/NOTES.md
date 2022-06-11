Recursive approach (TLE):
Similar to LCS here we have to count no of ways how can we find t in s.
that is we have to get t in s as subsequence.
Base cond:
​
if n== 0 means we matched all the chars of t so we return 1.
if m==0 means we haven't matched all the chars so we did not find the subsequence.
​
if x[m-1] == y[n-1] that is characters macthing then we have two choices cause we have to maximize the no of ways
1. move to next char of both s and t
2. move to next char of s and t remains same (we can also find t in s[n-1] substring again)
​
​
if does not match we go to next char of s.
​
​
​
DP:(best approach)
​
​
​
​
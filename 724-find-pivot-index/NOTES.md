1. First approach:
leftSum + pivot + rightSum = toalArraySum
if(leftSum == (total - pivot)/2)
ans = i
​
2. make left array and fill it with the sums of the elements till the index, starting from zero.
make right array and fill it with the sums of the elements till the index, staring from last index.
the element that is same in both array will be pivot cause sum from left side and sum from right side is same for pivot.
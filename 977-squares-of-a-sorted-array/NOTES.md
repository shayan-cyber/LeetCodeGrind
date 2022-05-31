1. Merge Two Sorted Arrays:
we'll first count the last index of negative elements .
we'll square all the elements eg [-4, -1 , 0, 3, 10] -> [16, 1, 0, 9, 100]
here 1, 16 and 0, 9, 100 are two sorted arrays (first one is reversed in the actual squared array) and we can now merge both.
​
2. Two pointer:
we'll start two pointers i =0; j=n-1;
compare absolute values
​
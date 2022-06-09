Kadane's algorithm:
we take maxi to store maximum sum , we'll initialize it to nums[0] cause there must be atleast one element in the subarray.
we take variable sum for storing positive sum till now.. and maxi for storing maximum sum.
if sum becomes less than zero we'll make sum =0. cause carrying sum negative always decrease the subarray sum.
https://www.youtube.com/watch?v=w_KEocd__20
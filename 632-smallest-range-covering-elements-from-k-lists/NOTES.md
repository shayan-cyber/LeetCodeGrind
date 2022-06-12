we have to include atleast one element from each sub array .
we can make vector of pairs of all element of the nums array with the number of subarray with with it.
eg:
[[1,2,3],[1,2,3],[1,2,3]]
[(1,0),(2,0) , (3,0) , (1,10 so on]
​
now we can sort it so that we can get a range easily now we'll apply sliding window  on vector of pairs to get a window with atelast one element of all subarray in it now we can get the range from the window edges and we have to make the range min by slinding window and making the widnow smaller with one thing keepng in mind that the widnow should have all the all the indexes from 0 to nums.size() in it as as pair.second.
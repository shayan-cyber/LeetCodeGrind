We'll use sliding window here cause we need to get substring from the string and minimize the substring.
approach:
we'll make map of t string..
we'll take count variable to count the size of map that is no of unique chars in t.
we'll take two pointers for window
we'll iterate in s through those pointers and if we find char in map and if we find we'll decrease the frequency if freq becomes zero for any key of map that is all repeatation of one unique char of map is found in that window so decrease count ..
if count becomes zero ie we have found one substr now we minize the length of that substr through left pointer if we find any key again we increase the freq ..if freq becomes one that is the current substr is invalid we need to find again that key , so increase count and increase the window.
https://www.youtube.com/watch?v=iwv1llyN6mo
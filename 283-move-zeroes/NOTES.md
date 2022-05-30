1.Optimized approach: make a vector of pairs and for each non-zero element count no. of zeroes encountered till now and make the pair as {item, relative position index in new array}.
relative position index in new array = index - no_of_zeroes;
​
Now iterate over the vector and place them on right index.
​
2. Best Approach:
Double pointer will be implemented where one pointer will point to non zero and one pointer to the last zero that the other pointer encountered then replace the zero with the  nonzero.
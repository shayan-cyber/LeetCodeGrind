It's a DFS question ..
here each digit can have 3 or 4 alphabets ..
now we can imagine each digit as an edge of graph and each digit will represent 3 or 4 digits..we'll do dfs for digits and construct combinations through for loop of each alphabet it represents.
if the combination length reaches we'll stop the loop for that particular combination and push that combination to ans array..
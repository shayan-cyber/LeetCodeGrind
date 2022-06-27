we are doing bfs traversal for zigzag movement we are maintaining flag boolean..
we are running for loop under while to push each level simultaneously to the temp array.
cause after each iteration of while loop queue will look like this
​
3 --> 9, 20 --> 15,7
then we'll calculate size of queue that will denote width of the current level then we'll run for loop to push the whole level to the temp array.
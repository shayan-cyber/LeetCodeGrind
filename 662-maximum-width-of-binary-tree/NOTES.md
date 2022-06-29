doing bfs to get every level and maintaining index of each element of each level..through index we are getting width.
width = max(index of last element of queue(for each level) - index of first elemet of queue(for each level))
​
we are doing indx = p.second - start to escape integer overflow here we are asigning indices from 0 to each level again
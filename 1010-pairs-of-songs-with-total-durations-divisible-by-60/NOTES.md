here v is hashmap to count of elements with each remainder(0-60) remainders of each element.
​
now through iteration if the element if divided by 60 we'll add v[0] (no of elements with remainder 0) i.e the no of elements it can make pair with .
otherewise we'll calculate the remainder of the current element and calculate how much more it needs to get divided by 60 i.e **60 -remainder** if we find element value = **60 -remainder** (v[60-remainder]) in the map we'll add the v[60-remainder] to the count.
cause v[i] is no of element already visited with remainder i.
so if an element needs **60-remainder** more to get divided by 60 we'll find an element already visited that gives **60-remainder** as remainder.then they can add to give a sum that can be divided by 60.
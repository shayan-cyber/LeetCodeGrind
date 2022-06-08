Approach:
we take two pointers for haystack and needle and for haystack we start iterating and take the first index of the iteration and store it in temp. now until we find match with needle we keep increasing temp.. if all matches we return we turn flag to found and return i.
other wise we start again j=0(for needle) and go to next index of the haystack and start comparing again .
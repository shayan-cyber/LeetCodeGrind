First Approach:
using stack to store opening parenthesis .
if we find closing parenthesis  and stack is not empty then we have found a valid combo so we remove one opening parenthesis form stack..if stack is empty them there is no prefix opening parenthesis so it will be invalid and we'll store the index in a vector .
after all the iteration we'll check whether stack is empty cause there might be invalid opening parenthesis(extra) also stored in the stack that should be pushed in invalid vector..
now we sort the vector to get sorted indices of invalid parentheses..
after that we push it in queue because we need fifo operation in constructing the ans string.
​
​
second approach(better):
Same but here we use one marked character ("#")for invalid parenthesis instead of vector
and during contsruting the ans string we ignore those marked chars
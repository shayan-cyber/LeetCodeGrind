we'll run a recursive function to iterate through nodes of the BST..
if we current node is equal to either p/q it means the current node itself will be a common ancestor .
if we find one of p/q in left subtree and another in right subtree then the node itself will be the LCA..
​
if LS == NULL means the RS will have one of them and vice versa..
if LS == NULL and RS == NULL we'll return NULL..
1. First approach is using map.
2. Using Boyre-moore algo:
we store last most element in c and no of effective votes in c.
if we get an element other than c we decrease v and if v ==0 then we change c.
​
if element is present more than n/2 times then it will survive till last cause otherwise other elements effective vote will cancel out the most voted elements votes.
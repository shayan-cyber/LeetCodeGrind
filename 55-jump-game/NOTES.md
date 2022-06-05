First Approach:
same as jump game ll , just compare the currReach with the last index after iteration.
​
Second Approach:
calculate maxjump for each iteration by maxJump = max(nums[i], maxJump) -1;
if maxJump <0 then return false .
cause for every jump it'll cost 1 energy and we have two choice in every index either choose the nums[i] or take remaining of energy from the last maxJump energy.
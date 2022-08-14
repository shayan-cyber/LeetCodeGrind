class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n1 = s.length();
        int n2 = goal.length();
        if(n1 != n2)
            return false;
        
        while(n1--){
            
            char f = goal[0];
            // char l = goal[n1-1];
            goal.erase(goal.begin());
            goal = goal + f;
            if(goal == s)
                return true;
            
            
        }
        
        return false;
    }
};
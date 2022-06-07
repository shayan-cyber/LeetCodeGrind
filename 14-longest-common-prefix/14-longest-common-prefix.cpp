class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        int minL =INT_MAX;
        int ind;
        for(int i=0; i<n; i++){
            if(strs[i].length()<minL){
                minL = strs[i].length();
                ind = i;
            }
        }
        if(n==1){
            return strs[0];
        }
        if(minL ==0){
            return "";
        }
        
        
        int i=0;
        bool flag = true;
        while(i<minL && flag){
            
            char temp = strs[ind][i];
            
            for(int j=0; j<n; j++){
                if(temp != strs[j][i]){
                    flag = false;
                    break;
                }
                    
            }
            if(flag)
            i++;
            
            
            
        }
        string ans;
        for(int j=0; j<i; j++){
            ans = ans + strs[ind][j];
        }
        return ans;
        
    }
};
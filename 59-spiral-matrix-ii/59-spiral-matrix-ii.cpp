class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        
        vector <vector<int>> m(n, vector<int> (n, 0));
        int top =0;
        int bottom =n-1;
        int left = 0;
        int right = n-1;
        
        
        int dir = 1;
        int num =1;
        while(left <= right && top <= bottom){
            if(dir==1 && left <= right){
                for(int i=left; i<=right; i++){
                    m[top][i] = num;
                    num++;
                    
                }
                top++;
                dir = 2;
            }
            else if(dir ==2 && top<= bottom){
                for(int i=top ; i<= bottom; i++){
                    m[i][right] = num;
                    num++;
                    
                }
                right--;
                dir = 3;
            }
            
            else if(dir== 3 && left<= right){
                for(int i= right; i>=left; i--){
                    m[bottom][i] =  num;
                    num++;
                    
                }
                bottom--;
                dir = 4;
            }
            else if(dir == 4 && top<= bottom){
                for(int i=bottom ; i>= top; i-- ){
                    m[i][left] = num;
                    num++;
                    
                }
                left ++;
                dir=1;
            }
        }
        
        
        return m;
        
    }
};
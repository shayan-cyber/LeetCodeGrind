class Solution {
public:
    int romanToInt(string s) {
        
        int n = s.length();
        int count = 0;
        for(int i=0; i<n; i++){
            if(i+1<n){
                if(s[i] == 'I' && s[i+1] == 'V'){
                    count += 4;
                    i++;
                    continue;
                }else if(s[i] == 'I' && s[i+1] == 'X'){
                    count += 9;
                    i++;
                    continue;
                }else if(s[i]=='X' && s[i+1] == 'L'){
                    count+=40;
                    i++;
                    continue;
                }else if(s[i] == 'X' && s[i+1] == 'C'){
                    count+=90;
                    i++;
                    continue;
                }else if(s[i] == 'C' && s[i+1] == 'D'){
                    count+= 400;
                    i++;
                    continue;
                }else if(s[i] == 'C' && s[i+1] == 'M'){
                    count+=900;
                    i++;
                    continue;
                }
            }
            
            if(s[i] == 'I')
                count+=1;
            else if(s[i]=='V')
                count+=5;
            else if(s[i] =='X')
                count +=10;
            else if(s[i]=='L')
                count+=50;
            else if(s[i] == 'C')
                count+=100;
            else if(s[i] == 'D')
                count += 500;
            else if(s[i] == 'M')
                count+=1000;
        }
        return count;
    }
};
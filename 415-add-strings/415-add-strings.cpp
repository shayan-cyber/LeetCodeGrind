class Solution {
public:
    string addStrings(string num1, string num2) {
            // don't know why it is giving wrong ans for large integers
//         long long int n1 =0;
//         long long int n2=0;
//         int n = num1.length();
//         int m = num2.length();
//         for(int i=n-1; i>=0; i--){
//             // cout<<num1[i]-48<<" ";
//             n1 = (num1[i]-48)*pow(10, n-i-1) + n1;
//             cout<<n1<<" ";
//         }
        
//         for(int i=m-1; i>=0; i--){
//             n2 = (num2[i]-48)*pow(10, m-i-1) + n2;
//         }
        
//         cout<<endl;
//         cout<<n1<<" " <<n2;
//         long long int sum = n1+ n2;
  
//         string ans = to_string(sum);
//         return ans;
        
        
        
//         approach two
        
        int indx1 = num1.length()-1;
        int indx2 = num2.length()-1;
        
        int carry=0;
        string ans;
        
        while(indx1>=0||indx2>=0||carry){
            int temp1 = indx1>=0?num1[indx1] - '0':0;
            int temp2 = indx2>=0?num2[indx2] - '0':0;
            
            int sum = temp1 + temp2 + carry;
            carry = sum/10;
            int val = sum%10;
            ans = ans + to_string(val);
            indx1--;
            indx2--;
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
        
        
        
    }
};
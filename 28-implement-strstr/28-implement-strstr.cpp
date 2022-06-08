class Solution
{
    public:
        int strStr(string haystack, string needle)
        {

            int h = haystack.length();
            int n = needle.length();

            if (n == 0)
                return 0;
           	// int i =0;
           	// int j =0;
            int i=0;
            int j = 0;
            int ans=-1;
            bool found =false;
            while(i<=h-n){
                int temp =i;
                while(temp<h){
                    if(haystack[temp]== needle[j]){
                        if(j==n-1){
                             found =true;
                            cout<<"here";
                            return i;
                        }
                        temp++;
                        j++;
                    }else{
                        cout<<i<<" "<<j<<" ";
                        i++;
                        j=0;
                        break;
                    }
                }
                
            }
           if(found)
                return i;
            else
                return -1;
        }
};
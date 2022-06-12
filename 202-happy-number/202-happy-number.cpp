class Solution
{
    public:
        int getSqrSum(int n)
        {

            int temp = n;
            int temp2 = 0;
            while (temp != 0)
            {
                temp2 = temp2 + (temp % 10) *(temp % 10);
                temp = temp / 10;
            }
            
            return temp2;
        }

    bool isHappy(int n)
    {

        if (n == 1)
        {
            return true;
        }
       	//         first approach using set to detect loop.
       	//         set<int> mp;

       	//         int x= n;
       	//         while(true){

       	//             if(x==1){
       	//                 return true;
       	//             }
       	//             if(mp.find(x) != mp.end()){
       	//                 return false;
       	//             }
       	//             mp.insert(x);
       	//             int temp =x;
       	//             int temp2 =0;
       	//             while(temp!= 0){
       	//                 temp2 = temp2 + (temp%10)*(temp%10);
       	//                 temp = temp/10;

       	//             }

       	//             x = temp2;

       	//         }

        
        
       	//         second approach to detect loop using tortoise and hare method(floyd's cycle detection)
        
//         int slow = n;
//         int fast = n;
        
//         do{
//             slow = getSqrSum(slow);
//             fast = getSqrSum(getSqrSum(fast));
            
            
//         }while(slow!=fast);
        
//         return slow== 1;
        
        
//         best approach 
        
        int temp =n;
        while(1){
        
            
            if(temp==1)
                return true;
            if(temp == 89)
                return false;
            temp = getSqrSum(temp);
            
        }


        
        

    }
};
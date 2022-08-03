/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
   
    
    ListNode* help(ListNode *currA, ListNode *currB){
        
        
        ListNode* dumA= currA;
        ListNode* dumB = currB;
        
        
        int countA = 0;
        int countB= 0;
        while(dumA){
            dumA = dumA -> next;
            countA++;
        }
        
        while(dumB){
            dumB = dumB -> next;
            countB++;
        }
        
        
        
        if(countA>countB){
            
            dumA = currA;
            int d = countA - countB;
            while(d--){
                dumA = dumA -> next;
                
            }
            
            dumB = currB;
            while(dumB != dumA){
                
                dumB= dumB-> next;
                dumA = dumA -> next;
                
                
            }
            
            
            return dumB;
            
            
            
        }else{
            
            
            dumB = currB;
            int d = countB -countA;
            
            while(d--){
                dumB = dumB -> next;
                
            }
            dumA = currA;
            
           while(dumB != dumA){
                
                dumB= dumB-> next;
                dumA = dumA -> next;
                
                
            }
            
            
            return dumB;
            
            
            
        }
        
        
        
        
        
        
        
        
        
    }
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        return help(headA,headB);
        
        
        
    }
};
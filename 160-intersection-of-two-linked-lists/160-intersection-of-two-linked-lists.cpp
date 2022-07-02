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
    
    ListNode *headInt = NULL;
    
    bool flag = false;
    
    void help(ListNode *currA, ListNode *currB){
        
        if(currA == NULL || currB == NULL)
            return;
        
        ListNode* tempA = currA;
        
        while(tempA){
            
            ListNode* tempB = currB;
            
            while(tempB){
                
                if(tempA == tempB ){
                    headInt = tempA;
                    return;
                }
                    
                
                tempB = tempB -> next;
            }
            
            
            tempA = tempA -> next;
        }
        
        
        
        
        
        
        
        
        
    }
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        help(headA,headB);
        
        return headInt;
        
    }
};
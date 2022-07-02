/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    void help(ListNode* curr, ListNode* prev){
        
        if(curr== NULL)
            return;
        
        if(prev && curr-> val == prev -> val){
            // cout<<curr -> val<< prev-> val;
            prev -> next = curr -> next;
            
            
            
        }else{
            prev = curr ;
        }
        
        
        
        curr = curr -> next;
        help(curr, prev);
    }
    
    
    ListNode* deleteDuplicates(ListNode* head) {
        
        help(head,NULL);
        return head;
        
    }
};
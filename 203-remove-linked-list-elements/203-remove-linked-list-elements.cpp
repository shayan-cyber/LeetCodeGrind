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
    
    unordered_map <int,int> mp;
    
    
    
    ListNode* removeElements(ListNode* head, int val) {
        
        
        ListNode *curr = head;
        ListNode *prev = NULL;
        
        while(curr){
            
            if(!prev && curr -> val == val){
                head = curr -> next;
                // prev = head;
            }
            
            else if(prev && curr -> val == val){

                prev -> next = curr -> next;
                
            }else{
                prev = curr;
            }
            
            curr = curr -> next;
        }
        
        return head;
        
    }
};
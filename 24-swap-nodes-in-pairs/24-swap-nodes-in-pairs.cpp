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
    
    ListNode* help(ListNode* curr){
        
        if(curr == NULL)
            return curr;
        
        ListNode* nxt = curr -> next;
        if(nxt){
            ListNode* nxtnxt = nxt -> next; 
            nxt -> next = curr ;
            curr -> next = help(nxtnxt);
            return nxt;
        }else{
            return curr;
        }
        
        
    }
    
    
    ListNode* swapPairs(ListNode* head) {
        // ListNode * newhead = head-> next;
        if(head == NULL || head -> next == NULL)
            return head;
        return help(head);
        // return newhead;
    }
};
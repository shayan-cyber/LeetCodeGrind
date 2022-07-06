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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL)
            return head;
        
        ListNode* curr = head;
        int len =1;
            
        while(curr -> next != NULL){
            curr = curr -> next ;
            len++;
        }
        
        curr -> next = head;
        
        
        curr = head;
        for(int i=0; i< len - (k%len)-1 ; i++){
            curr = curr -> next;
            
        }
        
        
        
          head = curr ->next;
        curr -> next = NULL;
        
    return head;
        
        
        
    }
};
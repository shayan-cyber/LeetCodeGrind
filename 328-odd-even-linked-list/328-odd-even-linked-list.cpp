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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode* odd = NULL;
        ListNode* oddhead = NULL;
        
        ListNode* even = NULL;
        ListNode* evenhead = NULL;
        
        
        ListNode* curr = head;
        
        int i =0;
        while(curr){
            i++;
            if(i%2 != 0){
                if(oddhead == NULL){
                    oddhead = curr;
                     odd = curr;
                }else{
                    odd -> next = curr;
                    odd = odd ->next;
                }
                
                
            }else{
                
                if(evenhead == NULL){
                    evenhead = curr;
                     even = curr;
                }else{
                    even -> next = curr;
                    even = even ->next;
                }
                
            }
            
            
            curr = curr -> next;
        }
        
        
        if(even){
            even -> next = NULL;
        }
        
        
        odd -> next = evenhead;
        return oddhead;
        
    }
};
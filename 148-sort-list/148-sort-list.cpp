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
    ListNode* mergeList(ListNode* l1, ListNode* l2){
        
        ListNode* newhead = new ListNode(0);
        ListNode* ptr = newhead;
        
        
        while(l1 && l2){
            
            if(l1 -> val <= l2 -> val){
                ptr -> next = l1;
                l1 = l1->next;
            }else{
                ptr -> next = l2;
                l2 = l2->next;
            }
            
            ptr = ptr -> next;
        }
        
        
        
        if(l1){
            ptr -> next = l1;
            l1 = l1 -> next;
          
        }
        
        
        if(l2){
            
            
            ptr -> next = l2;
            l2 = l2 ->next;
           
        }
        
        return newhead -> next;
    }
    
    
    
    ListNode* sortList(ListNode* head) {
        
        if( head == NULL ||head -> next == NULL )
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp =NULL;
        
        while(fast && fast -> next){
            
            temp = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        temp -> next = NULL;
        
       ListNode* l1= sortList(head);
       ListNode* l2 = sortList(slow);
       return mergeList(l1, l2);
        
    }
};
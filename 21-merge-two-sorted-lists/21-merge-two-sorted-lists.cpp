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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* head  =NULL;
        
//         if(p1 && p2){
//             if(p1-> val < p2-> val){
//                 head = p1;
//             }else{
//                 head = p2;
//             }
//         }
        
        
        
        if(p1 && p2){
            if(p1-> val < p2-> val){
                head = p1;
                p1 = p1-> next;
            }else{
                head = p2;
                p2 = p2->next;
            }
        }else if(p1){
            
            head = p1;
            p1 = p1->next;
            
        }else if(p2){
            
            head = p2;
            p2 = p2-> next;
            
        }
        ListNode* curr = head;
        
        while(p1 && p2){
            
            if(p1-> val <p2->val ){
                
                curr -> next = p1;
                curr = curr -> next;
                
                p1 = p1->next;
                
                
            }else{
                curr -> next = p2;
                curr = curr -> next;
                p2 = p2->next;
            }
        }
        
        while(p1){
            curr -> next = p1;
            curr = curr -> next;
                
            p1 = p1->next;
        }
         while(p2){
            curr -> next = p2;
            curr = curr -> next;
                
            p2 = p2->next;
        }
        
        
        return head;
    }
};
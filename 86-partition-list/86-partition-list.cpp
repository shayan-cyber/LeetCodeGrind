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
    ListNode* partition(ListNode* head, int x) {
//         with queue(naive)
        
//         queue <ListNode*> q1;
//         queue <ListNode*> q2;
        
//         ListNode* curr =head;
//         if(head == NULL)
//             return NULL;
        
//         while(curr){
            
            
//             if(curr -> val <x){
//                 q1.push(curr);
//             }else{
//                 q2.push(curr);
//             }
//             curr = curr -> next;
//         }
        
        
        
//         ListNode* newhead = NULL;
//         if(!q1.empty()){
//             newhead = q1.front();
//             q1.pop();
//         }else{
//             newhead = q2.front();
//             q2.pop();
//         }
        
        
//         curr = newhead;
//         while(!q1.empty()){
            
//             curr -> next =  q1.front();
//             q1.pop();
//             curr = curr -> next;
            
            
            
            
            
//         }
        
//         while(!q2.empty()){
            
//             curr -> next = q2.front();
//             q2.pop();
//             curr = curr -> next;
//         }
//         curr -> next = NULL;
        
//         return newhead;
        
        
//         two pointer
        
        ListNode* lesser = NULL;
        ListNode* lesserhead = NULL;
        
        ListNode* greater = NULL;
        ListNode* greaterhead = NULL;
        
        
        ListNode* curr = head;
        
        if(head == NULL)
            return head;
        
        while(curr){
            
            if(curr -> val <x){
                
                if(lesserhead ==NULL){
                    lesserhead = curr;
                    lesser = curr;
                    // lesser = lesser -> next;
                }else{
                    lesser -> next = curr;
                    lesser = lesser -> next;
                }
                
                
            }else{
                
                if(greaterhead == NULL){
                    greaterhead = curr;
                    greater = curr;
                }else{
                    greater -> next = curr;
                    greater = greater -> next;
                }
                
                
                
                
            }
            
            curr = curr -> next;
        }
        if(greater)
        greater -> next = NULL;
        
        if(lesserhead){
            lesser -> next = greaterhead;
            return lesserhead;
        }else{
        
            return greaterhead;
        }
        
        
        
        
        
        
        
        
        
        
        
        
    }
};
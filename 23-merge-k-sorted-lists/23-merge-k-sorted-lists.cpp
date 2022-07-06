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
    ListNode* help(ListNode* l1, ListNode* l2){
        
        ListNode* newhead = new ListNode(0);
        ListNode* curr = newhead;
        
        
        while(l1 && l2){
            if(l1-> val <= l2 -> val){
                curr -> next = l1;
                curr  = curr -> next;
                l1 = l1 -> next;
                
            }else{
                curr -> next = l2;
                curr = curr -> next;
                l2 = l2 -> next;
                
            }
        }
        
        if(l1){
            curr -> next = l1;
            l1 = l1 -> next;
        }
        if(l2){
            curr -> next = l2;
            l2 = l2 -> next;
        }
        
        return newhead -> next;
        
    }
    
    

    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n =lists.size();
        
//         if(n>=2){
//             ListNode* head = help(lists[0], lists[1]);
//         }
        
        ListNode* head = NULL;
        for(int i=0; i<n; i++){
            head = help(head, lists[i]);
        }
        return head;
        
    }
};
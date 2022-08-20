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
    
    ListNode* solve(ListNode* head){
        
        ListNode* curr = head;
        int currsum =0;
        while(curr){
            
            currsum = currsum + curr-> val;
            if(curr -> val == 0){
                curr-> val = -1 *(currsum);
                currsum = 0;
            }
            
            curr = curr -> next;
            
        }
        
        
        curr = head;
        ListNode* nhead = NULL;
        ListNode* ncurr = nhead;
        while(curr){
            
            if(curr -> val < 0){
                if(nhead == NULL){
                    nhead = new ListNode(-1*(curr ->val));
                    ncurr = nhead;   
                }else{
                    
                    ncurr-> next = new ListNode(-1*(curr ->val));
                    ncurr = ncurr -> next;
                }
                
                
            }
            // cout<<curr -> val<<" ";
            curr = curr -> next;
            
            
            
        }
            
        return nhead;
        
        
    }
    
    ListNode* mergeNodes(ListNode* head) {
       return  solve(head);
    }
};
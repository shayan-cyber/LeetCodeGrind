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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int l =0;
        ListNode* curr = head;
        ListNode* start;
        while(curr){
            
            
            l++;
            
            if(l== k){
                start = curr;
            }
            
            curr = curr -> next;
            
           
            
            
        }
        
        // if()
        
        
        ListNode* end;
        curr = head;
    
        
        
        for(int i=0; i<l-k; i++){
            curr = curr -> next;
        }
        
        // cout<< start -> val<<" "<< curr -> val<<endl;
        
        // swap(curr, start);
        int val1 = curr -> val;
        
        curr -> val = start -> val;
        start -> val = val1;
        
        
        return head;
        
        
        
        
        
        
        
        
    }
};
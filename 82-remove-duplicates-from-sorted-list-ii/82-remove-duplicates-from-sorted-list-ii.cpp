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
    ListNode* deleteDuplicates(ListNode* head) {
        
        unordered_map <int,int> mp;
        
        ListNode* curr = head;
        
        while(curr){
            mp[curr -> val]++;
            curr = curr -> next;
            
                
            
            
        }
        
        
        ListNode* prev = NULL;
        curr = head;
        while(curr){
           if(mp[curr->val] >1){
               int temp = mp[curr -> val];
               for(int i=0; i<temp; i++){
                   if(curr)
                   curr = curr -> next;
               }
               if(prev ==NULL){
                   head = curr;
               }else  prev -> next = curr;
               
               
               
              
           }else{
                prev = curr;
               if(curr)
               curr = curr -> next;
           }
            
            
           // if(curr)
            
            
            
            
        }
        return head;
        
        
        
    }
};
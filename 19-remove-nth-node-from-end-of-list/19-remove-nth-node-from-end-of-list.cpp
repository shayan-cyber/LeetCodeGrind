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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count =0;
        ListNode* curr = head;
        
        while(curr){
            
            count ++;
            curr = curr -> next;
        }
        
  curr = head;
        ListNode* prev = NULL;
        
        
        int i=0;
        while(curr){
            i++;
            if(i==count -n +1){
                if(prev){
                    prev -> next = curr -> next;
                }else
                head= curr -> next;
                break;
            }
            
            ListNode* temp = curr;
            curr = curr -> next;
            prev = temp;
            
            
            
        }
        
        return head;
        
    }
};
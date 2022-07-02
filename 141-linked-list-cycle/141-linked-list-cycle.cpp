/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        
//         tortoise hare method
        
        ListNode *fast = head;
        ListNode *slow = head;
        if(slow == NULL || fast == NULL)
            return false;
        
        do{
            
            slow = slow -> next;
            
            if(fast -> next)
                fast = fast -> next -> next;
            else
                return false;
            
            
        }while(slow != fast && fast && slow);
        
        
            
        if(slow == fast)
            return true;
        return false;
        
    }
};
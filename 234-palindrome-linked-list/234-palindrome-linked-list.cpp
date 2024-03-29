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
    bool isPalindrome(ListNode* head) {
//         brute force;
        
        
        stack <int> st;
        
        ListNode *curr = head;
        
        
        while(curr){
            
            st.push(curr-> val);
            curr = curr -> next;
        }
        
        curr = head;
        while(!st.empty()){
            int temp = st.top();
            st.pop();
            if(temp != curr-> val)
                return false;
            
            curr = curr -> next;
            
        }
        
        return true;
        
        
        
        
        
        
        
    }
};
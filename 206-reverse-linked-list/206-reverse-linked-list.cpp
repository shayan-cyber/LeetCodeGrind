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
    ListNode* reverseList(ListNode* head) {
        
//         using stack
        
        stack <ListNode*>st;
        
        
        ListNode* mynode = head;
        while(mynode){
            
            st.push(mynode);
            mynode = mynode-> next;
            
        }
        if(st.size()==0)
            return NULL;
        // ListNode* myhead = st.top();
        
        ListNode* temp = NULL;
        ListNode* myhead = st.top();
        while(!st.empty()){
            
            temp = st.top();
            st.pop();
            
            if(st.size()>0){
                temp -> next = st.top();
            }else{
                temp -> next = NULL;
            }
            
            
        }
        
        return myhead;
        
    }
};
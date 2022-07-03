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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
//    using stack     
//         int count =0;
        
        
//         ListNode* curr =head;
        
//         stack <int> st;
        
        
//         while(curr){
            
//             count ++;
//             if(count >= left && count<= right){
//                 st.push(curr-> val);
//             }
            
//             curr = curr -> next;
            
            
//         }
        
        
        
//         curr = head;
//         ListNode* myhead = NULL;
//         ListNode* mycurr = NULL;
        
        
//         count =0;
//         while(curr){
//             count ++;
//             if(count >= left && count<= right){
//                 if(myhead == NULL){
//                     myhead = new ListNode(st.top());
//                     st.pop();
//                     mycurr = myhead;
//                 }else{
//                     mycurr -> next = new ListNode(st.top());
//                     st.pop();
//                     mycurr = mycurr -> next;
//                 }
            
                
//             }else{
//                 if(myhead == NULL){
//                     myhead = new ListNode(curr->val);
//                     mycurr = myhead;
//                 }else{
//                     mycurr -> next = new ListNode(curr -> val);
//                     mycurr = mycurr -> next;
                    
//                 }
                
//             }
            
//             curr = curr -> next;
            
//         }
        
        
//         return myhead;
        
        
        
        
        
//         using stack without making another list
        
        
        ListNode* leftnode = head;
        
        for(int i=1; i<left; i++){
            leftnode = leftnode -> next;
            
        }
        stack<int> st;
        
        ListNode* node = leftnode;
        for(int i=left; i<=right; i++){
            
            st.push(node-> val);
            node = node -> next;
            
        }
        
        for(int i=left; i<=right; i++){
            
            leftnode -> val = st.top();
            st.pop();
            leftnode = leftnode -> next;
            
        }
        
        
        return head;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};
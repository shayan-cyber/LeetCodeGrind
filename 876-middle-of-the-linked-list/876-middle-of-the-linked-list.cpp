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
    ListNode* middleNode(ListNode* head) {
        
//         first approach (naive)
//         int count =0;
        
        
//         ListNode* mynode = head;
//         while(mynode != NULL){
            
            
//             count++;
//             mynode = mynode -> next;
            
            
//         }
        
//         cout<<count;
        
//         mynode = head;
//         int temp =count/2;
//         count =1;
//         while(mynode != NULL){
//             if(count == temp+1)
//                 break;
//             mynode = mynode -> next;
//             count ++;
            
//         }
//         // return NULL;
//         return mynode;
        
//         using slow fast pointer
        
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        
        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        
        return slow;
        
        
    }
};
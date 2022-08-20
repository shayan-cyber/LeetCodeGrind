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
    
    ListNode* solve(ListNode* l1, ListNode* l2, int a, int b){
        
        auto curr = l1;
        ListNode* start =NULL;
        for(int i=0; i<= b; i++){
            
            if(i == a-1)
                start = curr;
            curr = curr -> next;
        }
        
        
        
        start -> next = l2;
        auto curr2 = l2;
        while(curr2 -> next){
            curr2 = curr2 -> next;
        }
        
        curr2 -> next = curr;
        
        return l1;
        
        
    }
    
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        return solve(list1, list2, a, b);
        
        
        
    }
};
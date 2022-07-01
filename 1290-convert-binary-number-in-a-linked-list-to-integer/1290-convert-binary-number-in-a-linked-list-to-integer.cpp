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
    int getDecimalValue(ListNode* head) {
        
        string s ="";
        
        ListNode* mynode = head;
        
        while(mynode){
            
            s = s+ (to_string(mynode-> val));
            mynode = mynode -> next;
            
        }
        
        cout<<s;
        
        long long int n = stoi(s, 0, 2);
        
        return n;
        
        
        
        
        
    }
};
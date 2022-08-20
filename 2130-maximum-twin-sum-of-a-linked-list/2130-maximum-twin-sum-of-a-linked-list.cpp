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
    
    int solve(ListNode* head,int n){
//         unordered_map <int, int> mp;
        
//         int i=0;
//         int res = INT_MIN;
//         auto curr = head;
//         while(curr){
//             if(mp.find(n-i-1) != mp.end()){
//                 res = max(res, curr-> val + mp[n- i- 1]);
//             }
//             mp[i] = curr -> val;
//             curr = curr -> next;
//             i++;
//         }
        
//         second approach
        
//         int res = INT_MIN;
//         auto curr = head;

//         int i=0;
//         queue <int> q;
//         stack <int> s;
        
//         while(curr){
//             if(i< n/2){
//                 q.push(curr -> val);
//             }else{
//                 s.push(curr -> val);
//             }
            
//             curr = curr -> next ;
//             i++;
//         }    
        
        
        
        
//         while(!q.empty() && !s.empty()){
            
//             int t1 = q.front();
//             q.pop();
//             int t2 = s.top();
//             s.pop();
//             res = max(res, t1 + t2);
            
            
//         }
        
//         third approach
        auto slow = head;
        auto fast = head;
        int res = INT_MIN;
        
        while(fast && fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
            
        }
        
        
        
//         reverse
       
        ListNode* curr = slow;    
        ListNode* nxt = slow -> next ;
        ListNode* prev = NULL;
         
        while(nxt){
            
            curr -> next = prev;
            prev = curr;
            // nxt -> next = curr;
            curr = nxt;
            nxt = nxt -> next;
   
            
        }
        curr -> next = prev;
        
        while(curr && head){
            res = max(res, curr -> val + head -> val);
            curr = curr -> next;
            head = head -> next;
        }
        
        
        
        
        
        
        
        return res;
    }
    
    int pairSum(ListNode* head) {
        
        int l=0;
        auto curr = head;
        while(curr){
            curr = curr -> next;
            l++;
        }
        
        return solve(head, l);
        
        
    }
};
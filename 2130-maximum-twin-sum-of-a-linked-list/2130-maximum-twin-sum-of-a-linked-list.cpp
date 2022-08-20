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
        
        int res = INT_MIN;
        auto curr = head;

        int i=0;
        queue <int> q;
        stack <int> s;
        
        while(curr){
            if(i< n/2){
                q.push(curr -> val);
            }else{
                s.push(curr -> val);
            }
            
            curr = curr -> next ;
            i++;
        }    
        
        
        
        
        while(!q.empty() && !s.empty()){
            
            int t1 = q.front();
            q.pop();
            int t2 = s.top();
            s.pop();
            res = max(res, t1 + t2);
            
            
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
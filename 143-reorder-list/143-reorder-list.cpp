/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        void reorderList(ListNode *head)
        {
            
            
//              with queue (naive)
//             queue<ListNode*> q;
//             stack<ListNode*> s;

//             int n = 0;

//             ListNode *curr = head;

//             while (curr)
//             {

//                 q.push(curr);
//                 s.push(curr);

//                 n++;
//                 curr = curr->next;
//             }

//            	// cout<<n<<q.size()<<s.size();

//             if (n % 2 == 0)
//             {

//                 for (int i = 1; i <= n / 2; i++)
//                 {

//                     ListNode *t1 = q.front();
//                     q.pop();

//                     ListNode *t2 = s.top();
//                     s.pop();

//                     t1->next = t2;

//                     cout << i << " ";
//                     if (i < n / 2)
//                     {

//                         t2->next = q.front();
//                         cout << "here" << " ";
//                     }
//                     else
//                     {
//                         t2->next = NULL;
//                     }

//                    	// if(i<n/2){
//                    	//     ListNode* nxt = q.front();
//                    	//     t2-> next = nxt;
//                    	// }
//                 }
//             }
//             else
//             {

//                 for (int i = 1; i <= n / 2; i++)
//                 {

//                     ListNode *t1 = q.front();
//                     q.pop();

//                     ListNode *t2 = s.top();
//                     s.pop();

//                     t1->next = t2;

//                     cout << i << " ";

//                     t2->next = q.front();
//                     cout << "here" << " ";
//                 }
//                 s.top()->next = NULL;
//             }
            
            
            
            
//             without queue
            
            stack <ListNode*> s;
            
            
            int n =0;
            
            ListNode* curr = head;
            
            
            while(curr){
                
                s.push(curr);
                n++;
                curr= curr -> next;
            }
            
            
            curr =  head;
            
            for(int i=1; i<=n/2; i++){
                
                ListNode* el = s.top();
                s.pop();
                
                el -> next = curr ->next;
                curr -> next = el;
                curr = curr -> next -> next;
                
                
            }
            
            curr -> next = NULL;
            
            
            
            
            
            
            
            
            
            
            
            
        }
};
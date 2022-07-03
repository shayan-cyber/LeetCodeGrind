/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:

        ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
        {

            ListNode *curr1 = l1;
            ListNode *curr2 = l2;

            stack<int> s1;
            stack<int> s2;

            while (curr1)
            {

                s1.push(curr1->val);

                curr1 = curr1->next;
            }
            
            
           
            
            
            
            

            while (curr2)
            {

                s2.push(curr2->val);

                curr2 = curr2->next;
            }
            
            

            stack<int> s;

            int carry = 0;
            
            
            while (!s1.empty() || !s2.empty())
            {

                if (!s1.empty() && !s2.empty())
                {
                    int sum = s1.top() + s2.top() + carry;

                    carry = sum / 10;
                    sum = sum % 10;

                    s.push(sum);
                    

                    s1.pop();
                    s2.pop();
                }
                else if (!s1.empty())
                {

                    int sum = carry + s1.top();

                    carry = sum / 10;
                    sum = sum % 10;

                    s.push(sum);

                    s1.pop();
                }
                else
                {

                    int sum = carry + s2.top();
                    carry = sum / 10;
                    sum = sum % 10;

                    s.push(sum);

                    s2.pop();
                }

                
                
            }
            
            while (carry)
                {

                    s.push(carry);
                    carry = carry / 10;
                }

                ListNode *head = NULL;
                ListNode *curr = NULL;
                while (!s.empty())
                {
                    
                    // cout<<s.top()<<" ";

                    if (head == NULL)
                    {
                        head = new ListNode(s.top());
                        curr = head;
                        s.pop();
                    }
                    else {
                        
                        curr-> next = new ListNode(s.top());
                        curr = curr -> next;
                        s.pop();
                    }
                }
                return head;
            }
            
        
        };
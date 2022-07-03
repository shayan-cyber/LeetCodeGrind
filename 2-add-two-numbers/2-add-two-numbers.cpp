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

            int carry = 0;
            ListNode *head = NULL;
            ListNode *curr = NULL;

            while (curr1 || curr2)
            {

                if (curr1 && curr2)
                {
                    int sum = carry + curr1->val + curr2->val;
                    carry = sum / 10;
                    sum = sum % 10;

                    if (head == NULL)
                    {
                        head = new ListNode(sum);
                        curr = head;
                    }
                    else
                    {
                        curr->next = new ListNode(sum);
                        curr = curr->next;
                    }
                    curr1 = curr1 -> next;
                    curr2 = curr2 -> next;
                }
                else if (curr1)
                {

                    int sum = carry + curr1->val;
                    carry = sum / 10;
                    sum = sum % 10;

                    if (head == NULL)
                    {
                        head = new ListNode(sum);
                        curr = head;
                    }
                    else
                    {
                        curr->next = new ListNode(sum);
                        curr = curr->next;
                    }
                    curr1 = curr1 -> next;
                }
                else
                {
                    int sum = carry + curr2->val;
                    carry = sum / 10;
                    sum = sum % 10;

                    if (head == NULL)
                    {
                        head = new ListNode(sum);
                        curr = head;
                    }
                    else
                    {
                        curr->next = new ListNode(sum);
                        curr = curr->next;
                    }
                    curr2 = curr2 -> next;
                }
                
            }
            
            while(carry){
                
                curr -> next = new ListNode(carry);
                curr = curr -> next;
                carry = carry/10;
            }
            
            return head;
        }
};
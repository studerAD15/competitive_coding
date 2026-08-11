/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr)
        {
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* p1=head;
        ListNode* p2=nullptr;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
            if(slow==nullptr)
            {
                return nullptr;
            }
        }
        return nullptr;
    }
};
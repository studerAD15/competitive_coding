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
    ListNode* reverse(ListNode* head)
    {
        if(head==nullptr)
        {
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next; 
        }
        ListNode* revhead=reverse(slow->next);
        ListNode* c1=head;
        ListNode* c2=revhead;
        while(c2!=nullptr)
        {
            if(c1->val!=c2->val)
            {
                slow->next=reverse(revhead);
                return false;
            }
            c1=c1->next;
            c2=c2->next;
        }
        slow->next=reverse(revhead);
        return true;
    }
};
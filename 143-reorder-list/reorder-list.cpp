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
        if(head==nullptr || head->next==nullptr)
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
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* revhead=reverse(slow->next);
        slow->next=nullptr;
        ListNode* odd=head;
        ListNode* even=revhead;
        while(even!=nullptr)
        {
            ListNode* temp1=odd->next;
            ListNode* temp2=even->next;
            odd->next=even;
            even->next=temp1;
            odd=temp1;
            even=temp2;
        }
    }
};
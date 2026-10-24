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
    ListNode* reverseList(ListNode*head){
         ListNode*prev=NULL;
         ListNode*curr=head;

         while(curr!=NULL){
            ListNode* next=curr->next;

            curr->next=prev;
            prev=curr;
            curr=next;
         }
         return prev;
        }
    void reorderList(ListNode* head) {

        if(!head || !head->next) return;

        ListNode*slow=head;
        ListNode*fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* second=slow->next;
        slow->next=NULL;
        second=reverseList(second);

        ListNode* first=head;

        while(second!=NULL){
            ListNode* firstNext=first->next;
            ListNode* secondNext=second->next;

            first->next=second;
            second->next=firstNext;

            first=firstNext;
            second=secondNext;

        }
        
    }
};